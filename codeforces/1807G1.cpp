/*
author:  rohitkotha10
created: 23.04.2023 17:50:22
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
    if (arr[0] != 1) {
        cout << "NO" << endl;
        return;
    }
    int curmax = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] <= curmax) {
            curmax = curmax + arr[i];
        } else {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
