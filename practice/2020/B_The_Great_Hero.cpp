#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

void solve()
{   
    int A, B, n;
    cin>>A>>B>>n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int damage=0;
    for(int i=0;i<n;i++)
    {
        int times=(b[i]+A-1)/A;
        damage+=times*a[i];
    }
    B-=damage;
    for(int i=0;i<n;i++)
    {
        if(B+a[i]>0)
            {cout<<"YES\n"; return;}
    }
    cout<<"NO\n";
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
