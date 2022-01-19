#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n,u,v;
    cin>>n>>u>>v;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];


    int ans=-1;
    int flag=2; //0 for 0, 1 for u or v, 2 for u+v;

    for(int i=0;i<n-1;i++)
    {
        if(abs(arr[i]-arr[i+1])>=2)
        {
            flag=0;
            break;
        }
    }
    if(flag!=0)
    {
        for(int i=0;i<n-1;i++)//case diff=1
        {
            if(abs(arr[i]-arr[i+1])==1)
            {
                flag=1;
                ans=min(u,v);
                break;
            }
        }
    }

    if(flag==2)
    {
        ans=min(2*v,u+v);
    }

    if(flag==0) cout<<0<<endl;
    else cout<<ans<<endl;

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
