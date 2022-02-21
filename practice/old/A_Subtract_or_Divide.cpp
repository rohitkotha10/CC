#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;


void solve()
{
    ll n;
    ll cnt=0;
    cin>>n;
    if(n==1) cout<<0<<endl;
    else if(n==2) cout<<1<<endl;
    else if(n==3) cout<<2<<endl;
    else if(n%2==0) cout<<2<<endl;
    else if(n%2==1) cout<<3<<endl;

    
    
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
