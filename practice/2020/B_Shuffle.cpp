/*
author:  rohitkotha10
created: 23.05.2021 11:03:45
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
    int n, x, m;
    cin >> n >> x >> m;
    vector<int> larr(m);
    vector<int> rarr(m);

    rep(i, 0, m - 1, 1)
            cin >>
        larr[i] >> rarr[i];

    vector<pair<int, int>> sol;

    int small = x;
    int big = x;
    rep(i, 0, m - 1, 1)
    {
        if (larr[i] <= big && small <= rarr[i])
        {
            if (larr[i] < small)
                small = larr[i];
            if (rarr[i] > big)
                big = rarr[i];
        }
    }

    cout << big - small + 1 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
