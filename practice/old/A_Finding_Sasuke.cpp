#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        vector<int> sol(n);
        for(int i=0;i<n-1;i+=2)
        {
            sol[i]=-v[i+1];
            sol[i+1]=v[i];
        }

        for(int i=0;i<n;i++) cout<<sol[i]<<' ';
        cout<<endl;

    }
    



}
    
   

signed main()
{
    IOS;
    solve();
   
}
