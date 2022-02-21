#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if(k == 1)
    {
        cout << 1 << endl;
        return;
    }

    if(n == 1)
    {
        cout << 2 << endl;
        return;
    }

    int ans = (n-1)*(k-2) + n + 1;
    cout << ans%1000000007 << endl;



    
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
