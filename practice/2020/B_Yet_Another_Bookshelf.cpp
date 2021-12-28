#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int cnt=0;
    int mapback=-2;
    int mapfir=-2;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            mapfir=i;
            break;
        }
        
    }

    for(int i=n-1;i>=0;i=i-1)
    {
        if(v[i]==1)
        {
            mapback=i;
            break;  
        }
        
    }
    if(mapfir==mapback) cout<<0<<endl;

    else
    {
        for(int i=mapfir;i<=mapback;i++)
        {
            if(v[i]==0)
            cnt++;
        }
    cout<<cnt<<endl;
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
