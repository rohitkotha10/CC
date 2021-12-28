/*
author:  rohitkotha10
created: 25.06.2021 20:27:07
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

char Rev(char c)
{
    if (c == 'R')
        return 'P';
    if (c == 'P')
        return 'S';
    if (c == 'S')
        return 'R';
    return 0;
}
void solve()
{
    string arr;
    cin >> arr;
    int n = arr.size();
    int r = 0, p = 0, s = 0;
    for (char i : arr)
    {
        if (i == 'R')
            p++;
        else if (i == 'P')
            s++;
        else
            r++;
    }

    if (r >= p && r >= s)
    {
        string ans(n, 'R');
        cout << ans << endl;
        return;
    }

    if (p >= r && p >= s)
    {
        string ans(n, 'P');
        cout << ans << endl;
        return;
    }

    if (s >= p && s >= r)
    {
        string ans(n, 'S');
        cout << ans << endl;
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
