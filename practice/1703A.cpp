/*
author:  rohitkotha10
created: 16.07.2022 15:01:42
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
    cout << (s == "yes" || s == "yeS" ||
             s == "yEs" || s == "yES" ||
             s == "Yes" || s == "YeS" ||
             s == "YEs" || s == "YES" ?
             "YES" : "NO") << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
