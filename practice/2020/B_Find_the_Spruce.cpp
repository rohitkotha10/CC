/*
author:  rohitkotha10
created: 17.06.2021 09:01:43
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: neal wu
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];

    int ans = 0;

    vector<vector<int>> width(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '*')
            {
                int backans = 1;
                int frontans = 1;
                for (int jback = j - 1; jback >= 0; jback--)
                {
                    if (arr[i][jback] == '*')
                        backans++;
                    else
                        break;
                }

                for (int jfront = j + 1; jfront <= m - 1; jfront++)
                {
                    if (arr[i][jfront] == '*')
                        frontans++;
                    else
                        break;
                }

                width[i][j] = min(backans, frontans);
            }

            else
                width[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '*')
            {
                int k = 1;
                while (k <= n - i)
                {
                    if (width[i + k - 1][j] >= k)
                        ans++;
                    else
                        break;
                    k++;
                }
            }
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
