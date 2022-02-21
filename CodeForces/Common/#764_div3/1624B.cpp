/*
author:  rohitkotha10
created: 11.01.2022 17:37:34
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
    int a, b, c;
    cin >> a >> b >> c;
    if (a + c == 2 * b)
    {
        cout << "YES" << endl;
        return;
    }

    int lhs = a + c;
    int rhs = 2 * b;
    if (rhs < lhs)
    {
        cout << (lhs % rhs == 0 ? "YES" : "NO") << endl;
        return;
    }
    if (rhs > lhs)
    {
        cout << ((rhs - c) % a == 0 || (rhs - a) % c == 0 ? "YES" : "NO") << endl;
        return;
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
