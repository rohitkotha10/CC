/*
author:  rohitkotha10
created: 04.03.2023 03:39:28
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

    if (n <= k) {
        if (s == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    if (n >= 2 * k) {
        cout << "YES" << endl;
        return;
    }

    int startval = n - k;
    int len = (k - 1) - startval + 1;
    if (s.substr(startval, len) == t.substr(startval, len))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
