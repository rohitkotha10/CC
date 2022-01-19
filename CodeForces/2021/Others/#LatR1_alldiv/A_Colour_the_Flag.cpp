/*
author:  rohitkotha10
created: 13.06.2021 21:05:59
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

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];

    string wr;
    rep(i, 0, m - 1, 1)
    {
        if (i % 2 == 0)
            wr.push_back('W');
        else
            wr.push_back('R');
    }
    string rw;
    rep(i, 0, m - 1, 1)
    {
        if (i % 2 == 0)
            rw.push_back('R');
        else
            rw.push_back('W');
    }

    vector<string> sol1(n);
    rep(i, 0, n - 1, 1)
    {
        if (i % 2 == 0)
            sol1[i] = rw;
        else
            sol1[i] = wr;
    }

    vector<string> sol2(n);
    rep(i, 0, n - 1, 1)
    {
        if (i % 2 == 0)
            sol2[i] = wr;
        else
            sol2[i] = rw;
    }

    bool flag = 1;
    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, m - 1, 1)
        {
            if (arr[i][j] != '.')
            {
                if (arr[i][j] != sol1[i][j])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
        rep(i, 0, n - 1, 1)
        {
            cout << sol1[i] << endl;
        }
        return;
    }

    flag = 1;

    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, m - 1, 1)
        {
            if (arr[i][j] != '.')
            {
                if (arr[i][j] != sol2[i][j])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
        rep(i, 0, n - 1, 1)
        {
            cout << sol2[i] << endl;
        }
        return;
    }

    cout << "NO" << endl;
    return;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
