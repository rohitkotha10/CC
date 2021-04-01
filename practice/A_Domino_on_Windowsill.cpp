#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, k1, k2, w , b;
    cin >> n >> k1 >> k2 >> w >> b;

    int maxw, maxb;

    maxw = min(k2,k1) + abs(k2-k1)/2;
    maxb = min(n-k1,n-k2) + abs(k2-k1)/2;
    if(w <= maxw && b <= maxb) cout << "YES" << endl;
    else cout << "NO" << endl;
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
