/*
author:  rohitkotha10
created: 23.02.2024 18:07:19
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    int sz = unique(arr.begin(), arr.end()) - arr.begin();
    arr.resize(sz);
    // cout << n << ' ' << arr.size() << ' ' << sz << endl;
    // for (int i = 0; i < sz; i++) cout << arr[i] << ' ';
    // cout << endl;
    int mx = 1;
    for (int i = sz - 1; i >= 0; i--) {
        int fir = lower_bound(arr.begin(), arr.end(), arr[i] - n + 1) - arr.begin();
        // cout << fir <<  ' ' << i << endl;
        mx = max(i - fir + 1, mx);
    }
    cout << mx << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
