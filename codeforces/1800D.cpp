/*
author:  rohitkotha10
created: 04.03.2023 02:44:23
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < n - 2; i++) {
        if (s[i] == s[i + 2]) cnt++;
    }

    // for (string a: ans) cout << a << ' ';
    cout << n - 1 - cnt << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
