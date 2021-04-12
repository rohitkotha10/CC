#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

//sol: Tutorial
void solve(const vector<int>& v)
{
     
    int n, m;
    cin >> n >> m;

    int ans = 0;

    while(n > 0)
    {
        int val = n % 10;
        if(m + val < 10) ans += 1;
        else ans += v[m + val - 10];
        ans %= MOD;
        n /= 10;
    }

    cout << ans << endl;

    
}

signed main()
{
    vector<int> dp(2e5 + 5);
    rep(i, 0, 8, 1) dp[i] = 2;
    dp[9] = 3; 
    rep(i, 10, MAX, 1) dp[i] = ( dp[i - 9] + dp[i - 10] ) % MOD;

    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve(dp);
    }
}
