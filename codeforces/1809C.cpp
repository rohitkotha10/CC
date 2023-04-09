/*
author:  rohitkotha10
created: 09.04.2023 19:58:37
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
    int n, k;
    cin >> n >> k;

    vector<int> ans(n, -1000);
    if (k != 0) {
        int series = 0;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            series++;
            sum += series;
            if (sum >= k) break;
        }
        if (sum != k) series--;

        int cur = 1;
        for (int i = n - 1; i >= n - series; i--) {
            ans[i] = cur;
            cur++;
        }

        int rem = sum - k;
        // cout << series << ' ' << rem << "$ ";
        int ressum = 0;

        for (int i = n - series; i < n - series + rem - 1; i++) { ressum += ans[i]; }
        if (rem != 0) ans[n - 1 - series] = -(ressum + 1);
        ans.back() = 500;
    }
    for (int i = 0; i < n; i++) cout << ans[i] << ' ';
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
