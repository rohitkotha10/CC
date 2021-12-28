#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        for(int j=1;j<=n;j++)
        {
            for(int i=1;i<=n;i++)
            {
                if(i==j || i+j==n+1) cout<<1<<' ';
                else cout<<0<<' ';
            }
            cout<<endl;
        }
    }

    else
    {
        for(int j=1;j<=n;j++)
        {
            for(int i=1;i<=n;i++)
            {
                if(i==j || i+j==n+1) cout<<1<<' ';
                else if(i==1 && j==(n+1)/2) cout<<1<<' ';
                else if(i==(n+1)/2 && j==1) cout<<1<<' ';
                else if(i==(n+1)/2 && j==n) cout<<1<<' ';
                else if(i==n && j==(n+1)/2) cout<<1<<' ';
                else cout<<0<<' ';
                
            }
            cout<<endl;
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
