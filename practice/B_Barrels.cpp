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
    sort(v.rbegin(),v.rend());

    int cnt=v[0];
    for(int i=1;i<=k;i++)
    {
        cnt+=v[i];
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
