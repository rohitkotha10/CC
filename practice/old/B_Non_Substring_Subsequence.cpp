#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

void solve()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;

    while(q--)
    {
        bool flag=0;
        int l,r;
        cin>>l>>r;
        for(int i=0;i<l-1;i++)
        {
            if(s[i]==s[l-1]) flag=1;
        }
        for(int i=r;i<n;i++)
        {
            if(s[i]==s[r-1]) flag=1;
        }
    
        if(flag) cout<<"YES"<<endl;
        if(!flag) cout<<"NO"<<endl;
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
