#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vr(n);
    vector<int> vb(n);
    for(int i = 0; i < n; i++) cin >> vr[i];
    for(int i = 0; i < n; i++) cin >> vb[i];

    bool flag=1;
    int cntr=0,cntb=0;;
    for(int i = 0; i < n; i++)
    {
        if(vr[i]!=vb[i])
        {
            flag=0;
            if(vr[i]==1) cntr++;
            else cntb++;
        }
    }

    int req=0;
    if(flag==0)
    {
        if(cntr==0) cout<<-1<<endl;
        else
        {
            req=floor(double(cntb)/double(cntr));
            req++;
            cout<<req<<endl;
        }
    }
    else cout<<-1<<endl;




}
    
   

signed main()
{
    IOS;
    int t=1;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
