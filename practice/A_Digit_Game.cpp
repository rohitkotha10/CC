#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

bool is_even(char a)
{
    if
    (   a=='0' ||
        a=='2' ||
        a=='4' ||
        a=='6' ||
        a=='8'  ) return true;
        return false;
}

bool is_odd(char a)
{
    if
    (   a=='1' ||
        a=='3' ||
        a=='5' ||
        a=='7' ||
        a=='9'  ) return true;
        return false;

}


void solve()
{
    int n;
    string s;
    cin>>n>>s;
    bool raze=0;
    bool breach=0;

    if(n%2==1)
    {
        for(int i=0;i<n;i+=2)
        {
            if(is_odd(s[i]))
            {
                raze=1;
                breach=0;
                break;
            }

            else
            {
                raze=0;
                breach=1;
            }
        }
    }

    else
    {
        for(int i=1;i<n;i+=2)
        {
            if(is_even(s[i]))
            {
                raze=0;
                breach=1;
                break;
            }
            else
            {
                raze=1;
                breach=0;
            }
        }
    }

    if(raze) cout<<1<<endl;
    else if(breach) cout<<2<<endl;




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
