/*
author:  rohitkotha10
created: 25.05.2021 17:33:49
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
//no test
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i][i];

    bool left = 1;
    rep(i, 0, n - 1, 1)
    {
        int put = arr[i][i];
        int cnt = 2;
        int curi = i;
        int curj = i - 1;
        while (cnt <= put)
        {
            if (left == 1)
            {
                if (curj < 0 || arr[curi][curj] != 0)
                {
                    curj++;
                    curi++;
                    left = 0;
                    continue;
                }
                //traverse left
                
                arr[curi][curj] = put;
                cnt++;
                curj--;
                
            }

            else
            {
                //traverse down
                arr[curi][curj] = put;
                cnt++;
                curj--;
                left = 1;

            }
        }
    }
    
    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, i, 1)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

signed main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}
