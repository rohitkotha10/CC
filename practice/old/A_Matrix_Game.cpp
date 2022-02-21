/*
author:  rohitkotha10
created: 14.04.2021 21:46:50
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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n);
    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, m - 1, 1)
        {
            int val;
            cin >> val;
            arr[i].push_back(val);
        }
    }

    set<int> occi, occj;

    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, m - 1, 1)
        {
            if(arr[i][j] == 1)
            {
                occi.insert(i);
                occj.insert(j);
            }
        }
    }

    int ans = 1; //for Ashish

    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, m - 1, 1)
        {
            if(occi.count(i) == 0 && occj.count(j) == 0)
            {
                occi.insert(i);
                occj.insert(j);
                ans = 1 - ans;
            }
        }
    }
    (ans == 1) ? cout << "Vivek\n" : cout << "Ashish\n";









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
