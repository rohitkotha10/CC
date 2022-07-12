/*
author:  rohitkotha10
created: 12.07.2022 20:49:34
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
    int sz = 2 * min(a, b);
    string ans;
    for (int i = 0; i < sz; i++)
    {
        if (i % 2 == 0)
            ans += "0";
        else
            ans += "1";
    }
    int rem = abs(b - a);
    string last;
    if (b > a)
        last = string(rem, '1');
    else
        last = string(rem, '0');
    cout << ans + last << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
