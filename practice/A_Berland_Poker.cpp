#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i,start,endin,incre) for(int i = start; i < endin; i+= incre)
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    if(n/k >= m) cout << m << endl;
    else
    {
        int ans = (m-n/k)/(k-1);
        if( (m-n/k) % (k-1) != 0) ans++;   
        cout << n/k - ans << endl;
    }
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
