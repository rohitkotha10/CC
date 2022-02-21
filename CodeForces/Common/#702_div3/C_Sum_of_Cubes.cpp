#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;


void solve()
{
    ll n;
    cin>>n;
    bool flag=0;

    for(ll i=1;i<5000;i++)
    {
        for(ll j=1;j<5000;j++)
        {
            if( (j*j*j + i*i*i) ==n)
            {
                flag=1;
                break;
            }
        }
    }

    for(ll i=5000;i<10000;i++)
    {
        for(ll j=5000;j<10000;j++)
        {
            if( (j*j*j + i*i*i) ==n)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
