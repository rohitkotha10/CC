/*
author:  rohitkotha10
created: 15.07.2022 15:43:49
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
    int n;
    cin >> n;
    // 4x + 6y = n; min(x + y) and max(x + y)
    // 4 1 1, 6 1 1
    // 12, 24, ... n / 6 n / 4
    // 10, 16, 22, ...
    // 10, 14, 18, ....
    //
    if (n % 2 == 1 || n < 4)
        cout << -1 << endl;
    else if (n == 4 || n == 6)
        cout << 1 << ' ' << 1 << endl;
    else
    {
        int mn = n / 6;
        if (6 * mn != n)
            mn++;
        int mx = n / 4;

        cout << mn << ' ' << mx << endl;
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
