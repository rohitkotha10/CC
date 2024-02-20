/*
author:  rohitkotha10
created: 16.02.2024 09:02:50
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
    if (k <= 2 * n) {
        int ans = k / 2;
        if (ans + ans != k)
            cout << ans + 1 << endl;
        else
            cout << ans << endl;
    } else if (k == 4 * n - 3) {
        cout << 2 * n - 1 << endl;
    } else if (k == 4 * n - 2) {
        cout << 2 * n << endl;
    } else {
        int ans = k / 2;
        if (ans + ans != k)
            cout << ans + 1 << endl;
        else
            cout << ans << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
