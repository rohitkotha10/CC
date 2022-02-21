/*
author:  rohitkotha10
created: 03.01.2022 22:06:29
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
    int n, k;
    cin >> n >> k;
    if (k > (n + 1) / 2)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && i % 2 == 0 && k > 0)
            {
                cout << 'R';
                k--;
            }
            else
                cout << '.';
        }
        cout << endl;
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
