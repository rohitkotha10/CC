#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<char> v(n+5);
    if(k==1)
    {
        for(int i=0;i<n;i+=3)
        {
            v[i]='a';
            v[i+1]='c';
            v[i+2]='b';
        }
    }
    else
    {
        for(int i=0;i<k;i++)
        {
            v[i]='a';
        }
        for(int i=k;i<n;i+=3)
        {
            v[i]='b';
            v[i+1]='c';
            v[i+2]='a';
        }
    }
    for(int i=0;i<n;i++) cout<<v[i];
    cout<<endl;
    
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
