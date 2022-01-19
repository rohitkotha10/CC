/*
author:  rohitkotha10
created: 03.01.2022 20:23:03
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
    int mx = max(a, max(b, c));
    if (a != mx)
        cout << mx - a + 1 << ' ';
    else if (a == b || a == c)
        cout << 1 << ' ';
    else
        cout << 0 << ' ';

    if (b != mx)
        cout << mx - b + 1 << ' ';
    else if (a == b || b == c)
        cout << 1 << ' ';
    else
        cout << 0 << ' ';

    if (c != mx)
        cout << mx - c + 1 << endl;
    else if (c == b || a == c)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
