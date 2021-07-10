/*
author:  rohitkotha10
created: 11.07.2021 00:15:36
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
    int xa, xb, xf, ya, yb, yf;
    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xf >> yf;
    int ans = abs(xa - xb) + abs(ya - yb);

    if (xa == xb && xb == xf)
    {
        if ((ya < yf && yf < yb) || (ya > yf && yf > yb))
            ans += 2;
    }

    else if (ya == yb && yb == yf)
    {
        if ((xa < xf && xf < xb) || (xa > xf && xf > xb))
            ans += 2;
    }
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
