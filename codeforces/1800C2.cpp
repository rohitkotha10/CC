/*
author:  rohitkotha10
created: 04.03.2023 02:00:26
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
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = 0;
    set<pair<int, int>> chosen;
    int ind = 0;
    for (int i = 0; i < n; i++) {
        chosen.emplace(arr[i], i);
        if (arr[i] == 0) {
            ans += (*chosen.rbegin()).first;
            chosen.erase(*chosen.rbegin());
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
