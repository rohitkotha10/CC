#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int x1,y1,x2,y2;
    cin>>x1,y1,x2,y2;
    if(x1==x2 || y1==y2)
    {
        cout<<abs(x1-x2) + abs(y1-y2)<<endl;
    }
    else
    {
        cout<<abs(x2-x1) +

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
