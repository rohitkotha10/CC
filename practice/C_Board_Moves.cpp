#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i,start,endin,incre) for(int i = start; i < endin; i+= incre)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    rep(i,3,n+1,2) ans += 2*(i-1)*(i-1);
    cout << ans << endl;



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
