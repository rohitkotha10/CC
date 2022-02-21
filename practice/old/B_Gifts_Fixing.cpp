#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int gift_min(vector<int> v)
{
    sort(v.begin(),v.end());
    return v[0];

}

void solve()
{
    int n;
    cin>>n;
    vector<int> va(n);
    vector<int> vb(n);

    for(int i=0;i<n;i++) cin>>va[i];
    for(int i=0;i<n;i++) cin>>vb[i];

    int vamin=gift_min(va);
    int vbmin=gift_min(vb);
    int cnt=0;

    for(int i=0;i<n;i++)
    {
        cnt+=max(va[i]-vamin,vb[i]-vbmin);
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
