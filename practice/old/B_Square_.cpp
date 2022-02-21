#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;

    bool flag=0;
    if(a1==a2)
    {
        if(b1+b2==a1) flag=1;
    }

    if(a1==b2)
    {
        if(b1+a2==a1) flag=1;
    }

    if(b1==b2)
    {
        if(a1+a2==b1) flag=1;
    }

    if(b1==a2)
    {
        if(a1+b2==b1) flag=1;
    }

    
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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
