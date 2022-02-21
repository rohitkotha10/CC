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

    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
        {
            swap(v[i],v[n-i-1]);
        }
    }

    else
    {
        for(int i=0;i<(n-1)/2;i++)
        {
            swap(v[i],v[n-i-1]);
        }
    }

    for(int i=0;i<n;i++) cout<<v[i]<<' ';
    cout<<endl;


    
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
