/*
author:  rohitkotha10
created: 29.12.2021 16:18:30
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
    int a, b;
    cin >> a >> b;
    int t1 = min(a, b);
    int t2 = (a + b) / 4;
    cout << min(t1, t2) << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
