/*
author:  rohitkotha10
created: 03.01.2022 21:35:10
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
    int ans = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
        ans = (ans * i) % MOD;

    ans = (ans * n) % MOD;
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
