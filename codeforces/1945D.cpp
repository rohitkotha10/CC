/*
author:  rohitkotha10
created: 19.03.2024 14:24:36
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int temp = 0;

    for (int i = n - 1; i >= m; i--) temp += min(a[i], b[i]);
    int ans = temp + a[m - 1];
    if (m > 1 && a[m - 1] > b[m - 1]) {
        int mtemp = 0;
        for (int i = m - 1; i >= 1; i--) {
            mtemp += b[i];
            ans = min(ans, mtemp + temp + a[i - 1]);
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
