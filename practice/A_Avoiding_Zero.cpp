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

    sort(v.rbegin(),v.rend());
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }

    if(sum==0) cout<<"NO"<<endl;
    else
    {
        if(sum>0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++) cout<<v[i]<<' ';
            cout<<endl;
        }
        if(sum<0)
        {
            cout<<"YES"<<endl;
            for(int i=n-1;i>=0;i--) cout<<v[i]<<' ';
            cout<<endl;
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
