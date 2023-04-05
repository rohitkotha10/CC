/*
author:  rohitkotha10
created: 04.04.2023 19:48:13
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
    string s, t;
    cin >> s >> t;

    int cnt = 0;
    for (int i = t.length() - 1; i >= 0; i--) { s += t[i]; }
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) cnt++;
    }
    cout << (cnt > 1 ? "NO" : "YES") << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
