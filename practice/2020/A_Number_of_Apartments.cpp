#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n;
    cin>>n;

    bool flag=0;
    int qo3;
    int qo5;
    int qo7;
    int t1=-1;
    for(int i=0;i<205;i++)
    {
        for(int j=0;j<150;j++)
        {
            t1=n-(5*i)-(7*j);
            //cout<<"i: "<<i<<endl<<"j: "<<j<<endl<<"n: "<<n<<endl<<"t1: "<<t1<<endl;
            if(t1%3==0 && t1>=0)
            {
                flag=1;
                qo3=t1/3;
                qo5=i;
                qo7=j;
                break;
            }
        }
        if(t1%3==0 && t1>=0) break;
    }
    if(flag)
    {
        cout<<qo3<<' '<<qo5<<' '<<qo7<<endl;
    }
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
