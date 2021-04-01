#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

void solve()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int ans = 0;
    if(x > y) swap(x,y);
    {
        ans += (y-x)*a;
    }

    if(2*a <= b) ans += a*2*x;
    else ans += b*x;
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
