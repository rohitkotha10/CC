/*
author:  rohitkotha10
created: 12.07.2022 20:23:00
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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n);
    int tile = 0;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int cur;
            cin >> cur;
            if (i == 0 && j == 0)
                tile = cur;
            if (cur > tile)
            {
                tile = cur;
                x = i;
                y = j;
            }
            arr[i].push_back(cur);
        }
    }
    cout << max(x + 1, n - x) * max(y + 1, m - y) << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
