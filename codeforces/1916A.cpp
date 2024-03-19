/*
author:  rohitkotha10
created: 20.02.2024 17:42:29
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int cur = 1;
    for (int i = 0; i < n; i++) { cur *= arr[i]; }

    if (2023 % cur != 0)
        cout << "NO" << endl;
    else {
        int rem = 2023 / cur;
        cout << "YES" << endl;
        cout << rem << ' ';
        for (int i = 0; i < k - 1; i++) cout << 1 << ' ';
        cout << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
