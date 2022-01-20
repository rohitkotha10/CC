/*
author:  rohitkotha10
created: 19.01.2022 20:54:56
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
    int x, n;
    cin >> x >> n;
    int ans = 0;
    int cur = n % 4;
    if (cur == 1)
        ans = -n;
    else if (cur == 2)
        ans = 1;
    else if (cur == 3)
        ans = n + 1;
    else
        ans = 0;

    cout << (x % 2 == 0 ? x + ans : x - ans) << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
