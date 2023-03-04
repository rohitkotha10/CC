/*
author:  rohitkotha10
created: 24.12.2022 20:51:19
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
    int mx = arr[0];
    int mn = arr[0];
    for (auto i: arr) {
        mx = max(mx, i);
        mn = min(mn, i);
    }

    int a = 0;
    int b = 0;
    if (mn == mx) {
        cout << n * (n - 1) << endl;
        return;
    }
    for (auto i: arr) {
        if (i == mn) a++;
        if (i == mx) b++;
    }

    cout << 2 * a * b << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
