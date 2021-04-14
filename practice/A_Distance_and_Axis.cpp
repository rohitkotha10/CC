#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;

    if(n<k) cout<<k-n<<endl;
    else
    {
        if((n+k)%2==0) cout<<0<<endl;
        else cout<<1<<endl;
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
