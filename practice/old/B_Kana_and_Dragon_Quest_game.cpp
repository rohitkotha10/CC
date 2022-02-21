#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int x, n, m;
    cin >> x >> n >> m;
    if(x <= 20)
    {
        if(m>=double(x)/10.0) cout<<"YES"<<endl;
        else cout << "NO"<<endl;
    }

    else
    {
        for(int i=0;i<n;i++)
        {
            x = (double(x)/2.0) + 10;
        }

        if(m>=double(x)/10.0) cout<<"YES"<<endl;
        else cout << "NO"<<endl;
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
