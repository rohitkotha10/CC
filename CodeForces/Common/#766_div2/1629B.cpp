/*
author:  rohitkotha10
created: 22.01.2022 23:36:45
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
    int l, r, k;
    cin >> l >> r >> k;
    if (l == r)
    {
        if (l == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        return;
    }
    int cnt = r - l + 1;
    int needed;
    if ((l % 2 == 0 && r % 2 == 1) || (l % 2 == 1 && r % 2 == 0))
        needed = cnt / 2;
    else if (l % 2 == 0 && r % 2 == 0)
        needed = ((cnt - 1) / 2);
    else
        needed = ((cnt + 1) / 2);
    cout << (k >= needed ? "YES" : "NO") << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
