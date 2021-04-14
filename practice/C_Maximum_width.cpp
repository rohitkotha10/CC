#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    
    int left=-1;
    int right=-1;
    int j=0;
    bool flag=0;
    int maxdiff=0;
    bool rf=0;
    bool lf=0;

    for(int i=0;i<m;i++)
    {
        for(int j=left+1;j<n;j++)
        {
            if(s[j]==t[i] && lf==0 && i!=n-1)
            {
                lf=1;
                left=j;
                break;
            }
        }

        for(int j=n-1;j>left+1;j--)
        {
            if(s[j]==t[i+1] && lf==1 && i!=n-1)
            {
                rf=1;
                right=j;
                break;
            }
        }
        if(lf && rf) maxdiff=max(maxdiff,right-left);
        lf=0;
        rf=0;
        
    }

    cout<<maxdiff<<endl;
    




    
}
    
   

signed main()
{
    IOS;
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}
