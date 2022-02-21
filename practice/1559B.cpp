/*
author:  rohitkotha10
created: 20.01.2022 09:34:04
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
    string s;
    cin >> s;

    if (s[0] == '?')
    {
        int temp = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '?')
            {
                temp = i;
                break;
            }
        }
        if (temp == -1)
            s[0] = 'B';
        if (s[temp] == 'B')
            if (temp % 2 == 0)
                s[0] = 'B';
            else
                s[0] = 'R';
        else
            if (temp % 2 == 0)
                s[0] = 'R';
            else
                s[0] = 'B';
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '?')
        {
            if (s[i - 1] == 'B')
                s[i] = 'R';
            else
                s[i] = 'B';
        }
    }
    cout << s << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
