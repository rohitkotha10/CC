#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n,m,r,c;
    cin>>n>>m>>r>>c;

    cout<< max(c-1,m-c)+max(r-1,n-r) <<endl;



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
