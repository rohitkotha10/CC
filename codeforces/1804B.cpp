/*
author:  rohitkotha10
created: 12.03.2023 20:17:04
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
    int n, k, d, w;
    cin >> n >> k >> d >> w;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int ans = 0;
    int expiry = arr[0] + d + w;
    ans++;
    int num = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > expiry) {
            ans++;
            expiry = arr[i] + d + w;
            num = 1;
        } else if (num >= k) {
            ans++;
            expiry = arr[i] + d + w;
            num = 1;
        } else {
            num++;
        }
    }
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
