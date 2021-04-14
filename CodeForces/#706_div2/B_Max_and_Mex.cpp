#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> s;
    int maxval=0;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        maxval=max(maxval,val);
        s.insert(val);
    }

    int mex=0;
    bool flag=1;
    for(int i=0;i<n;i++)
    {
        if(s.count(i)==0)
        {
            mex=i;
            flag=0;
            break;
        }
    }

    if(flag) cout<<n+k<<endl;
    else
    {
        int req = ceil(double(mex+maxval)/2.0);
        if(s.count(req)==1 || k==0) cout<<n<<endl;
        else cout<<n+1<<endl;
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
