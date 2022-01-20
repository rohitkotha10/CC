/*
author:  rohitkotha10
created: 19.01.2022 08:31:00
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
    if (n % 2 == 0)
        cout << n - 3 << ' ' << 2 << ' ' << 1 << endl;
    else if (n % 4 == 1)
        cout << n / 2 - 1 << ' ' << n / 2 + 1 << ' ' << 1 << endl;
    else
        cout << n / 2 - 2 << ' ' << n / 2 + 2 << ' ' << 1 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
