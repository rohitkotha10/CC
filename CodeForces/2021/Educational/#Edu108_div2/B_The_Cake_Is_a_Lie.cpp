/*
author:  rohitkotha10
created: 29.04.2021 20:10:48
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    if (k == (m * n) - 1)
    {
        cout << "YES" << endl;
        return;
    }

    else
        cout << "NO" << endl;
}

signed main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
