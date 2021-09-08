/*
author:  rohitkotha10
created: 08.09.2021 20:10:19
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
    int cur = 0;
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j; i < n; i++)
        {
            if (s[i] == 'a')
                cur++;
            else
                cur--;
            if (cur == 0)
            {
                cout << j + 1 << ' ' << i + 1 << endl;
                return;
            }
        }
        cur = 0;
    }

    cout << -1 << ' ' << -1 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
