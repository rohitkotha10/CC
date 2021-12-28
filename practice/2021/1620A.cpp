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

    if (s.length() <= 2)
    {
        if (s == "NE" || s == "EN")
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        return;
    }
    if (s.back() == 'N')
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'N')
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
