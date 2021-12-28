#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for(int k=2;k<=n;k++)
    {
        int term=(pow(2,k)-1);
        if(n%term==0)
        {
            cout<<n/term<<endl;
            return;
        }
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
