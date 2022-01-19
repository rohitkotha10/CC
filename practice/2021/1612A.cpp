/*
author:  rohitkotha10
created: 29.12.2021 15:49:15
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
    int x, y;
    cin >> x >> y;
    if ((abs(x) + abs(y)) % 2 == 1)
    {
        cout << -1 << ' ' << -1 << endl;
        return;
    }

    if (x % 2 == 1)
        cout << (x - 1) / 2 << ' ' << (y + 1) / 2 << endl;
    else
        cout << x / 2 << ' ' << y / 2 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
