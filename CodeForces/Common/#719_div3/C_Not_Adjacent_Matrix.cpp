/*
author:  rohitkotha10
created: 03.05.2021 02:18:21
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

int testnum = 0;
int testflag = 0;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }

    vector<vector<int>> arr(n, vector<int>(n));
    int cnt = 0;

    rep(i, 0, n - 1, 1)
    {
        int st;
        if (i % 2 == 0)
            st = 0;
        else
            st = 1;

        rep(j, st, n - 1, 2)
        {
            cnt++;
            arr[i][j] = cnt;
        }
    }

    rep(i, 0, n - 1, 1)
    {
        int st;
        if (i % 2 == 0)
            st = 1;
        else
            st = 0;

        rep(j, st, n - 1, 2)
        {
            cnt++;
            arr[i][j] = cnt;
        }
    }

    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, n - 1, 1)
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
    cin >> t;
    while (t--)
    {
        testnum++;
        solve();
    }
}
