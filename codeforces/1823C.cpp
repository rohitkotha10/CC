/*
author:  rohitkotha10
created: 28.04.2023 03:41:52
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
    map<int, int> factors;
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        for (int j = 2; j * j <= temp; j++) {
            while (temp % j == 0) {
                factors[j]++;
                temp /= j;
            }
        }
        if (temp != 1) factors[temp]++;
    }
    // cout << factors.size() << endl;
    int extr = 0;
    int ans = 0;
    for (auto i: factors) {
        // cout << i.first << ' ' << i.second << endl;
        int cnt = i.second;
        ans += cnt / 2;
        if (cnt % 2 == 1) extr++;
    }
    if (extr >= 3) ans += extr / 3;
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
