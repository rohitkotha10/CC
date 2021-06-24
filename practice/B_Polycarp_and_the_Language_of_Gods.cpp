/*
author:  rohitkotha10
created: 23.06.2021 08:18:12
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
    string arr;
    cin >> arr;
    int n = arr.size();
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'w')
            cnt++;
        else
        {
            if (i != 0 )
            {
                if (arr[i - 1] == 'v')
                {
                    cnt++;
                    arr[i] = '0';
                }
            }
        }
    }

    cout << cnt << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
