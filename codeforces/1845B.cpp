/*
author:  rohitkotha10
created: 06.02.2024 17:44:35
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
    int xa, xb, xc, ya, yb, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    int ans = 1;
    if ((xa < xc && xa < xb) || (xa > xc && xa > xb)) ans += min(abs(xc - xa), abs(xb - xa));
    if ((ya < yc && ya < yb) || (ya > yc && ya > yb)) ans += min(abs(yc - ya), abs(yb - ya));
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
