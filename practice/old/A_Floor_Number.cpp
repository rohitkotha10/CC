#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n,k;
    cin>>n>>k;
    if(1<=n && n<=2) cout<<1<<endl;
    else;
    for(int i=1;i<=n;i++)
    {
        if(  ((i-1)*k +3) <= n  && n <= ((i)*k +2))
        {
            cout<<i+1<<endl;
            break;
        }
    }


}
    
   

signed main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
