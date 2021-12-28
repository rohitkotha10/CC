#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin>>n;

    bool flag=0;
    int cnt=0;


    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<100;i++)
    {
        if(n%3==0)
        {
            for(int j=0;j<100;j++)
            {
                if(n==1)
                {
                    flag=1;
                    break;
                }
                if(n%6==0)
                {
                    n/=6;
                    cnt++;
                }
                else
                {
                    n*=2;
                    cnt++;
                }
            }
            
        }
    }


    if(flag) cout<<cnt<<endl;
    else cout<<-1<<endl;


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
