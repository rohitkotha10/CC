/*
author:  rohitkotha10
created: 24.12.2022 21:02:32
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
    int n;
    cin >> n;
    vector<int> arr(n);

    for (auto &i: arr) cin >> i;
    int cur = arr[0];
    arr[0] = 0;
    sort(arr.begin(), arr.end());

    for (int i = 1; i < n; i++) {
        if (cur < arr[i]) { cur = (cur + arr[i] - 1) / 2 + 1; }
    }
    cout << cur << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
