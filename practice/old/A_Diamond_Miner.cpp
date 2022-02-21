/*
author:  rohitkotha10
created: 21.04.2021 02:41:22
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
    int n;
    cin >> n;

    vector<int> miners;
    vector<int> diamonds;

    rep(i, 1, 2 * n, 1)
    {
        int x, y;
        cin >> x >> y;
        if(x == 0) miners.push_back(abs(y));
        if(y == 0) diamonds.push_back(abs(x));
    }

    sort(miners.begin(), miners.end());
    sort(diamonds.begin(), diamonds.end());
    double ans = 0;

    rep(i, 0, n - 1, 1)
    {
        int yvs = miners[i] * miners[i];
        int xvs = diamonds[i] * diamonds[i];

        double distance = sqrt(yvs + xvs);
        ans += distance;
    }
    
    cout << fixed << setprecision(15) << ans << endl;
    
    
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