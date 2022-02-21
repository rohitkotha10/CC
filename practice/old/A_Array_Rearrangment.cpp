#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;


void solve()
{
    int n,x;
    cin>>n>>x;
    bool flag=1;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());

    for(int i=0;i<n;i++)
    {
        if(a[i]+b[i]>x)
        {
            flag=0;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
