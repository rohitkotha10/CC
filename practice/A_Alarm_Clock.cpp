#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>=a) cout<<b<<endl;
    else if(d>=c) cout<<-1<<endl;
    else
    {
        int term=ceil(double(a-b)/double(c-d));
        cout<<b+c*term<<endl;
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
