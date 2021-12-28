#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s="qwertyuiopasdfghjklzxcvbnm";
    if(a==1 && a!=1)
    {
        for(int i=0;i<n;i++) cout<<s[i];
        cout<<endl;
    }

    else
    {
        string sol;
        for(int i=0;i<b;i++) sol.push_back(s[i]);
        while(sol.length()<=a)
        {
            sol+=sol;
        }

        while(sol.length()<=n)
        {
            sol+=sol;
        }
        sol+=sol;
        //cout<<sol.length()<<endl;

        for(int i=0;i<n;i++) cout<<sol[i];
        cout<<endl;

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
