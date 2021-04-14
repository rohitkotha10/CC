#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    vector<ll> xval(n);
    vector<ll>yval(n);
    for(int i=0;i<n;i++)
    {
        cin>>xval[i]>>yval[i];
    }

    sort(xval.begin(),xval.end());
    sort(yval.begin(),yval.end());

    if(n%2==1) cout<<1<<endl;
    else cout<<(xval[n/2]-xval[(n/2)-1]+1)*(yval[n/2]-yval[(n/2)-1]+1)<<endl;
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