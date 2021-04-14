#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if(n%2==0)
    {
        cout<<2*k+n<<endl;
    }
    else
    {
        int fact=1;
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                fact=i;
                break;
            }
        }
        cout<<fact+n+(k-1)*2<<endl;
    
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
