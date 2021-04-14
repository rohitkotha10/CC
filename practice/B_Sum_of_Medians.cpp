#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int size=(n*k);
    vector<int> v(size+1);
    for(int i=1;i<=size;i++) cin>>v[i];

    int sum=0;
    if(n%2==1)
    {
        for(int i=0;i<=k-1;i++)
        {
            int toceil=(n+1)/2;
            int term=k*(toceil-1)+i*(toceil)+1;
            sum+=v[term];
        }

    }

    if(n%2==0)
    {
        for(int i=0;i<=k-1;i++)
        {
            int toceil=n/2;
            int term=k*(toceil-1)+i*(toceil+1)+1;
            sum+=v[term];
        }

    }
    
    cout<<sum<<endl;

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
