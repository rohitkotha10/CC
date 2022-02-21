#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int uni=n%10;
    if(n>=1 && n<=9)
    {
        cout<<10*(uni-1) + 1<<endl;
    }
    if(n>=11 && n<=99)
    {
        cout<<10*(uni-1) + 3<<endl;
    }
    if(n>=111 && n<=999)
    {
        cout<<10*(uni-1) + 6<<endl;
    }
    if(n>=1111 && n<=9999)
    {
        cout<<10*(uni-1) + 10<<endl;
    }
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
