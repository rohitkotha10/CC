#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> t(q);
    vector<int> x(q);
    for(int i=0;i<q;i++)
    {
        cin>>t[i]>>x[i];
    }

    int cnt1=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==1) cnt1++;
    }

    for(int i=0;i<q;i++)
    {
        if(t[i]==2)
        {
            if(x[i]<=cnt1) cout<<1<<endl;
            else cout<<0<<endl;
        }
        if(t[i]==1)
        {
            if(a[x[i]-1]==0)
            {
                a[x[i]-1]=1;
                cnt1++;
            }
            else
            {
                a[x[i]-1]=0;
                cnt1--;
            }
        }
    }
}
    
   

signed main()
{
    IOS;
    solve();
}
