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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());
    bool flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1]-v[i]>1)
        {
            flag=0;
            break;
        }
    }

    if(flag) cout<<"YES"<<endl;
    if(!flag) cout<<"NO"<<endl;


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
