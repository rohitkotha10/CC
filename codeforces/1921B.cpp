/*
author:  rohitkotha10
created: 09.02.2024 20:36:42
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
    int n;
    cin >> n;
    string s, f;
    cin >> s >> f;

    int cnt = 0;
    int sbox = 0, fbox = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != f[i]) cnt++;
        if (s[i] == '1') sbox++;
        if (f[i] == '1') fbox++;
    }

    int ans = cnt + abs(sbox - fbox);

    cout << ans / 2 << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
