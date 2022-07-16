/*
author:  rohitkotha10
created: 16.07.2022 14:27:19
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int l, r, a;
    cin >> l >> r >> a;
    int extr = r % a;
    int x = r;
    if (extr != a - 1)
        x = r - extr - 1;
    if (x < l)
        x = r;
    int ans = x / a + x % a;
    //cout << x << ' ';
    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
