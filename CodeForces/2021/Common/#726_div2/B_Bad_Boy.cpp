/*
author:  rohitkotha10
created: 19.06.2021 18:07:08
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
    int n, m, i, j;
    cin >> n >> m >> i >> j;
    if (n == 1)
    {
        if (j == 1)
            cout << 1 << ' ' << m << ' ' << 1 << ' ' << m << endl;
        else if (j == n)
            cout << 1 << ' ' << 1 << ' ' << 1 << ' ' << 1 << endl;
        else
            cout << 1 << ' ' << m << ' ' << 1 << ' ' << 1 << endl;
    }

    else if (m == 1)
    {
        if (i == 1)
            cout << n << ' ' << 1 << ' ' << n << ' ' << 1 << endl;
        else if (i == m)
            cout << 1 << ' ' << 1 << ' ' << 1 << ' ' << 1 << endl;
        else
            cout << n << ' ' << 1 << ' ' << 1 << ' ' << 1 << endl;
    }

    else
    {
        if (j <= m / 2)
            cout << 1 << ' ' << 1 << ' ' << n << ' ' << m << endl;
        else
            cout << 1 << ' ' << m << ' ' << n << ' ' << 1 << endl;
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
