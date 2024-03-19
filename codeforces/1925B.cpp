/*
author:  rohitkotha10
created: 23.02.2024 18:30:11
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
    int x, n;
    cin >> x >> n;
    int ans = 1;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (n <= x / i) ans = max(ans, i);
            if (n <= i) ans = max(ans, x / i);
        }
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
