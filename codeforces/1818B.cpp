/*
author:  rohitkotha10
created: 03.05.2023 15:00:52
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
    if (n == 1)
        cout << 1 << endl;
    else if (n % 2 == 1)
        cout << -1 << endl;
    else {
        vector<int> ans(n);
        for (int i = 0; i <= n; i += 2) ans[i] = i + 2;
        for (int i = 1; i <= n; i += 2) ans[i] = i;
        for (auto i: ans) cout << i << ' ';
        cout << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
