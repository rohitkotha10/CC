/*
author:  rohitkotha10
created: 14.07.2022 20:34:54
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
    vector<vector<int>> m1 = {{1, 0},
                              {0, 1}};
    vector<vector<int>> m2 = {{0, 1},
                              {1, 0}};
    n /= 2;
    m /= 2;
    vector<vector<vector<vector<int>>>> ans(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    ans[i].push_back(m1);
                else
                    ans[i].push_back(m2);
            }
            else
            {
                if (j % 2 == 0)
                    ans[i].push_back(m2);
                else
                    ans[i].push_back(m1);
            }
        }
    }

    for (auto bigrows : ans)
    {
        for (auto matrix : bigrows)
        {
            cout << matrix[0][0] << ' ' << matrix[0][1] << ' ';
        }
        cout << endl;
        for (auto matrix : bigrows)
        {
            cout << matrix[1][0] << ' ' << matrix[1][1] << ' ';
        }
        cout << endl;
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
