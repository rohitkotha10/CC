#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;


void solve()
{
    string s;
    cin >> s;
    int a=0;
    int b=0;
    int ans=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(') a++;
        if(s[i]=='[') b++;
        if(s[i]==')' && a>0) {a--; ans++;}
        if(s[i]==']'&& b>0) {b--; ans++;}
        
    }
    cout<<ans<<endl;
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
