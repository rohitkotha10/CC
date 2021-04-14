#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }
    if(sum==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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
