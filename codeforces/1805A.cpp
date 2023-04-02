/*
author:  rohitkotha10
created: 02.04.2023 20:05:42
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

    for (int x = 0; x < 256; x++) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int temp = x ^ arr[i];
            ans = temp ^ ans;
        }
        if (ans == 0) {
            cout << x << endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
