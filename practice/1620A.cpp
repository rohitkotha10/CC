/*
author:  rohitkotha10
created: 28.12.2021 19:55:54
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
    int cnt = 0;
    for (int i = 0; i < n; i++) 
    {
        if (s[i] == 'N')
            cnt++;
    }
    cout << (cnt == 1 ? "NO" : "YES") << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
