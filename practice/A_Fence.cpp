#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int fsq=(c-a)*(c-a);
    int ssq=b*b;
    int req=sqrt(fsq+ssq);
    cout<<req<<endl;


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
