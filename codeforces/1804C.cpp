/*
author:  rohitkotha10
created: 12.03.2023 20:48:02
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
    int n, x, p;
    cin >> n >> x >> p;
    for (int i = 0; i <= 2 * n; i++) {
        int needed = n - x + i * n;
        int orig = 1 + 8 * needed;
        int sq = sqrt(orig);
        if (sq * sq == orig && sq % 2 == 1 && sq >= 3 && sq / 2 <= p) {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
