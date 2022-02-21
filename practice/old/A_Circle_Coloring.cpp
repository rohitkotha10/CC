#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> va(n);
    vector<int> vb(n);
    vector<int> vc(n);

    for(int i=0;i<n;i++) cin>>va[i];
    for(int i=0;i<n;i++) cin>>vb[i];
    for(int i=0;i<n;i++) cin>>vc[i];

    vector<int> sol(n+100);

    sol[0]=va[0];
    for(int i=1;i<n;i++)
    {
        sol[i]=va[i];
        if(sol[i]==sol[i-1])
        {
            sol[i]=vb[i];
        }
    }

    if(sol[0]==sol[n-1]) sol[n-1]=vc[n-1];
    if (sol[n-2]==sol[n-1])
    {
        if(sol[0]==va[0]) sol[n-1]=vb[n-1];
        if(sol[0]==vb[0]) sol[n-1]=va[n-1];
    }

    for(int i=0;i<n;i++) cout<<sol[i]<<' ';
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
