#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    bool flag=0;

    int min_each=(a-b)*n;
    int max_each=(a+b)*n;
    int min_tot=(c-d);
    int max_tot=(c+d);

    if(min_each>=min_tot && min_each<=max_tot) flag=1;
    if(min_each<=min_tot && max_each>=min_tot) flag=1;

    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


    
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
