/*
author:  rohitkotha10
created: 28.09.2021 19:54:17
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
    string arr;
    cin >> arr;

    char vert = 'D';
    char checkv = 'U';
    string ans(n, '#');

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'U')
        {
            vert = 'D';
            checkv = 'U';
            break;
        }
        else if (arr[i] == 'D')
        {
            vert = 'U';
            checkv = 'D';
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == checkv)
            ans[i] = vert;
    }

    char hor = 'L';
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == vert)
            continue;
        else
        {
            ans[i] = hor;
            if (hor == 'R')
                hor = 'L';
            else if (hor == 'L')
                hor = 'R';
        }
    }

    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
