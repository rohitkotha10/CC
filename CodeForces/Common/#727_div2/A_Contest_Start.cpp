/*
author:  rohitkotha10
created: 20.06.2021 15:35:14
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n, x, t;
    cin >> n >> x >> t;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    if (t < x)
    {
        cout << 0 << endl;
    }
    else
    {
        int dis = t / x;
        if (dis >= n - 1)
        {
            cout << (n * (n - 1) / 2) << endl;
            return;
        }
        int ans = (n - dis) * dis;
        ans += (dis * (dis - 1)) / 2;
        cout << ans << endl;
    }
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
