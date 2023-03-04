/*
author:  rohitkotha10
created: 04.03.2023 03:14:33
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    string sorts = s;
    string sortt = t;
    sort(sorts.begin(), sorts.end());
    sort(sortt.begin(), sortt.end());
    if (sorts != sortt) {
        cout << "NO" << endl;
        return;
    }

    if (n <= 3) {
        if (s == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    if (n == 4) {
        if (s[1] == t[1] && s[2] == t[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    if (n == 5) {
        if (s[2] == t[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }
    if (n >= 6) {
        cout << "YES" << endl;
        return;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
