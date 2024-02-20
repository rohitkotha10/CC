/*
author:  rohitkotha10
created: 17.02.2024 20:05:25
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
    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    int ans = 0;
    for (int i = 0; i < 2 * n; i += 2) { ans += arr[i]; }
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
