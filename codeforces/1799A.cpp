/*
author:  rohitkotha10
created: 04.04.2023 19:23:20
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
    vector<int> arr(m);
    for (int i = 0; i < m; i++) cin >> arr[i];

    vector<int> checker(n + m + 1, 0);
    for (int i = 0; i < m; i++) { checker[arr[i]] = 1; }

    vector<int> ans(n + 1, -1);
    int cur = n;
    for (int i = 0; i < m && cur >= 1; i++) {
        if (checker[arr[i]] == 1) {
            checker[arr[i]] = 0;
            ans[cur] = i + 1;
            cur--;
        }
    }

    for (int i = 1; i <= n; i++) { cout << ans[i] << ' '; }
    cout << endl;
}

signed main() {
    // IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
