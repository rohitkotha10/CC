#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i]; 

    bool flag=1;
    ll sum=v[0];
    for(int i=1;i<n;i++)
    {
        sum+=v[i];

        if(sum<(i*(i+1)/2))
        {
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"YES"<<endl;
    if(flag==0) cout<<"NO"<<endl;
}
    
   

int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}