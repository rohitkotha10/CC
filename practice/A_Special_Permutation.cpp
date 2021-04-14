#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) v[i]=i;
    if(n%2==0)
    {
        for(int i=1;i<=n-1;i+=2)
        {
            swap(v[i],v[i+1]);
        }
    }
    else
    {
        for(int i=1;i<=n-1;i+=2)
        {
            swap(v[i],v[i+1]);
        }
        swap(v[n],v[(n+1)/2]);
    }

    for(int i=1;i<=n;i++) cout<<v[i]<<' ';
    cout<<'\n';

    
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
