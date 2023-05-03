/*
author:  rohitkotha10
created: 28.04.2023 02:51:17
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
    int ans = -1;
    for (int i = 0; i <= n / 2; i++) {
        int temp = (i * (i - 1)) / 2 + ((n - i) * (n - i - 1)) / 2;
        if (temp == k) {
            ans = i;
            break;
        }
    }
    if (ans == -1)
        cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for (int i = 0; i < ans; i++) cout << 1 << ' ';
        for (int i = 0; i < n - ans; i++) cout << -1 << ' ';
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
