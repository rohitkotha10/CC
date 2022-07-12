/*
author:  rohitkotha10
created: 12.07.2022 19:23:11
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
    int n, m;
    cin >> n >> m;
    int ans = m * (m + 1) / 2;
    ans += m * n * (n + 1) / 2;
    ans -= m;
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
