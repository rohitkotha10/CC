/*
author:  rohitkotha10
created: 16.02.2024 08:50:36
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
    int mx = 0, mn = MOD;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        mx = max(temp, mx);
        mn = min(temp, mn);
    }
    cout << mx - mn << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
