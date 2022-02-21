/*
author:  rohitkotha10
created: 03.01.2022 20:50:42
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
    int u, v;
    cin >> u >> v;
    cout << u * u << ' ' << -v * v << endl;

}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
