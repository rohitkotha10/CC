#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int a,b;
    cin>>a>>b;
    int diff;
    int uni=diff%10;
    diff=abs(b-a);
    int req=ceil(double(diff)/10.0);
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
