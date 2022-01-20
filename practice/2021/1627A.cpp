/*
author:  rohitkotha10
created: 19.01.2022 17:50:55
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
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    r--;
    c--;

    if (arr[r][c] == 'B')
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][c] == 'B')
        {
            cout << 1 << endl;
            return;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (arr[r][i] == 'B')
        {
            cout << 1 << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'B')
            {
                cout << 2 << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
