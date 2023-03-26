/*
author:  rohitkotha10
created: 26.03.2023 10:02:05
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
    int sum = 0;
    int sumeven = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) sumeven += arr[i];
        sum += arr[i];
    }
    cout << (sumeven + sumeven > sum ? "YES" : "NO") << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
