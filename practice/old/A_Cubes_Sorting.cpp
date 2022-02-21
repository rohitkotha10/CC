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

    vector<int> vcopy(n);
    vcopy=v;
    sort(vcopy.rbegin(),vcopy.rend());

    bool flag=0;

    for(int i=1;i<n;i++)
    {
        if(vcopy[i]==vcopy[i-1])
        {
            flag=1;
            break;
        }
    }


    for(int i=0;i<n;i++)
    {
        if(v[i]!=vcopy[i])
        {
            flag=1;
            break;
        }
    }

    if(vcopy[0]==vcopy[n-1]) flag=1;
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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
