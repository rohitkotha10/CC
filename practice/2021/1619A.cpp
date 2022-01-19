/*
author:  rohitkotha10
created: 29.12.2021 14:53:25
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
    string s;
    cin >> s;

    int n = s.length();
    if (n % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << (s.substr(0, n / 2) == s.substr(n / 2, n / 2) ? "YES" : "NO") << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
