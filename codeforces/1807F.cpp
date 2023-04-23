/*
author:  rohitkotha10
created: 23.04.2023 15:29:59
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool check(int i1, int j1, int i2, int j2, char ver, char hor) {
    if (abs(j2 - j1) == abs(i2 - i1)) {
        if (ver == 'U' && i2 <= i1 && hor == 'L' && j2 <= j1)
            return true;
        else if (ver == 'U' && i2 <= i1 && hor == 'R' && j2 >= j1)
            return true;
        else if (ver == 'D' && i2 >= i1 && hor == 'L' && j2 <= j1)
            return true;
        else if (ver == 'D' && i2 >= i1 && hor == 'R' && j2 >= j1)
            return true;
        else
            return false;
    } else
        return false;
}

void seek(int& cur, int val, char dir) {
    if (dir == 'D' || dir == 'R')
        cur += val;
    else if (dir == 'U' || dir == 'L')
        cur -= val;
}

void invert(char& dir) {
    if (dir == 'U')
        dir = 'D';
    else if (dir == 'D')
        dir = 'U';
    else if (dir == 'L')
        dir = 'R';
    else if (dir == 'R')
        dir = 'L';
}

void getBounce(int& i, int& j, int n, int m, char& ver, char& hor) {
    int verdis, hordis;
    if (ver == 'U')
        verdis = i - 1;
    else
        verdis = n - i;
    if (hor == 'L')
        hordis = j - 1;
    else
        hordis = m - j;

    if (verdis == hordis) {
        seek(i, verdis, ver);
        seek(j, hordis, hor);
        invert(ver);
        invert(hor);

    } else if (verdis < hordis) {
        seek(i, verdis, ver);
        seek(j, verdis, hor);
        invert(ver);
    } else if (verdis > hordis) {
        seek(i, hordis, ver);
        seek(j, hordis, hor);
        invert(hor);
    }
}

void solve(int testCase) {
    int n, m, i1, i2, j1, j2;
    char ver, hor;
    cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> ver >> hor;

    if (check(i1, j1, i2, j2, ver, hor)) {
        cout << 0 << endl;
    } else {
        int curi = i1, curj = j1;
        char curver = ver, curhor = hor;

        // cout << 0 << ' ' << curi << ' ' << curj << ' ' << curver << ' ' << curhor << endl;
        getBounce(curi, curj, n, m, curver, curhor);
        int starti = curi, startj = curj;
        char startver = curver, starthor = curhor;
        int cnt = 1;

        while (true) {
            // cout << cnt << ' ' << curi << ' ' << curj << ' ' << curver << ' ' << curhor << endl;

            if (check(curi, curj, i2, j2, curver, curhor)) {
                cout << cnt << endl;
                return;
            }

            getBounce(curi, curj, n, m, curver, curhor);
            cnt++;

            if (curi == starti && curj == startj && curver == startver && curhor == starthor) {
                cout << -1 << endl;
                return;
            }
        }
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
