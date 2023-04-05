/*
author:  rohitkotha10
created: 04.04.2023 16:46:53
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
    // input stored as a transpose
    vector<vector<int>> arr(m, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { cin >> arr[j][i]; }
    }

    int ans = 0;

    for (int i = 0; i < m; i++) {
        sort(arr[i].begin(), arr[i].end());
        vector<int> presums(n, 0);
        presums[0] = arr[i][0];
        for (int j = 1; j < n; j++) { presums[j] = arr[i][j] + presums[j - 1]; }
        // for (int j = 0; j < n; j++) { cout << arr[i][j] << ' '; }
        // cout << "$ ";
        // for (int j = 0; j < n; j++) { cout << presums[j] << ' '; }
        // cout << endl;

        for (int j = 0; j < n; j++) {
            int temp = 0;
            temp += presums[n - 1] - presums[j] - (n - 1 - j) * arr[i][j];
            // cout << temp << ' ';
            ans += temp;
        }
    }
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
