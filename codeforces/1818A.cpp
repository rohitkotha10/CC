/*
author:  rohitkotha10
created: 03.05.2023 09:02:57
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
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (arr[0] == arr[i]) ans++;
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
