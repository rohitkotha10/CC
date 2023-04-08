/*
author:  rohitkotha10
created: 08.04.2023 21:55:04
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve(int testCase) {
    int n, m;
    cin >> n >> m;
    int res1, res2, res3;

    cout << "? " << 1 << ' ' << 1 << endl;
    cin >> res1;
    if (res1 >= n) {
        cout << "? " << 1 << ' ' << res1 + 1 << endl;
        cin >> res2;
        cout << "! " << res2 + 1 << ' ' << res1 + 1 << endl;
    } else if (res1 >= m) {
        cout << "? " << res1 + 1 << ' ' << 1 << endl;
        cin >> res2;
        cout << "! " << res1 + 1 << ' ' << res2 + 1 << endl;
    } else {
        cout << "? " << res1 + 1 << ' ' << 1 << endl;
        cin >> res2;
        cout << "? " << 1 << ' ' << res1 + 1 << endl;
        cin >> res3;

        if (res1 == res2 && res2 == res3)
            cout << "! " << res1 + 1 << ' ' << res1 + 1 << endl;
        else if (res3 == res1)
            cout << "! " << res1 + 1 << ' ' << res2 + 1 << endl;
        else
            cout << "! " << res3 + 1 << ' ' << res1 + 1 << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
