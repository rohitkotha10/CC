#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int cnt=0;
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        cnt+=(k-v[i])/v[0];
    }
    

    cout<<cnt<<endl;



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
