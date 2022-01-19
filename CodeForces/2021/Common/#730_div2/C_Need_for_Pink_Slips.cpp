/*
author:  rohitkotha10
created: 07.07.2021 20:31:41
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
    double c, m, p, v;
    cin >> c >> m >> p >> v;
    
    int ans = 0;
    ans += p;
    cout << fixed << setprecision(12) << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
