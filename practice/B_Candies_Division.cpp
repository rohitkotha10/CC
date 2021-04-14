#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if(n%k == 0)
    {
        cout << n << endl;
    }
    else if(n < k) cout << min(n,k/2) << endl;
    else cout << k*(n/k) + min(n-k*(n/k),k/2) << endl;
}
    
   

signed main()
{
    IOS;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
