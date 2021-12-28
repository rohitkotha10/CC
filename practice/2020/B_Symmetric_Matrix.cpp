#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

struct Tile
{
    int upl,upr,lowl,lowr;
};

void solve()
{
    int n,m;
    cin>>n>>m;

    vector<Tile> tilevec(n);
    for(int i=0;i<n;i++)
    {
        cin>>tilevec[i].upl>>tilevec[i].upr;
        cin>>tilevec[i].lowl>>tilevec[i].lowr;
    }

    if(m%2==1) cout<<"NO"<<endl;
    else
    {
        bool flag=0;
        for(int i=0;i<n;i++)
        {
            if(tilevec[i].upr==tilevec[i].lowl)
            {
                flag=1;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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
