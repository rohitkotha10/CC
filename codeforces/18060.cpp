/*
author:  rohitkotha10
created: 18.03.2023 17:36:24
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    ans += d - b;
    if (ans < 0) {
        cout << -1 << endl;
        return;
    }
    a += ans;
    if (a >= c)
        ans += a - c;
    else {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
