/*
author:  rohitkotha10
created: 14.04.2021 22:31:34
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

vector<int> dp = {0, 2};

void solve()
{
    int n;
    cin >> n;

    int cnt = 0;
    while(n >= 2)
    {
        for(int i = dp.size() - 1; i >= 1; i--)
        {
            if(dp[i] <= n)
            {
                cnt++;
                n -= dp[i];
                if(n == dp[i]) i++;
            }
        }
    }
    cout << cnt << endl;
    

}

signed main()
{
    int val = 2;
    rep(i, 2, MAX, 1)
    {
        val = dp[i - 1] +  3 * i - 1;
        if(val > MOD) break;
        dp.push_back(val);
    }
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
