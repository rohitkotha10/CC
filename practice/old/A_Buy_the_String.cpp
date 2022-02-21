#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;


void solve()
{
    int n,c0,c1,h;
    string s;
    cin>>n>>c0>>c1>>h;
    cin>>s;

    int change=0;
    int cnt0=0;
    int cnt1=0;


    int size=s.length();

    if(c0==c1)
    {
        cout<<n*c1<<endl;
    }

    else
    {
        for(int i=0;i<size;i++)
        {
            if(s[i]=='0')
            {
                cnt0++;
            }
        }

        for(int i=0;i<size;i++)
        {
            if(s[i]=='1')
            {
                cnt1++;         
            }
        }

        if(h>=c0 && h>=c1)
        {
            cout<<cnt0*c0+cnt1*c1<<endl;
        }

        else if(h+min(c0,c1)>=max(c0,c1))
        {
            cout<<cnt0*c0+cnt1*c1<<endl;
        }
        else if(h+min(c0,c1)<max(c0,c1))
        {
            cout<<min((c0*n)+(cnt1*h),(c1*n)+(cnt0*h))<<endl;
        }
        else
        {
            cout<<min(c0*n,c1*n)<<endl;
        }

    }


}
    
   

int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
