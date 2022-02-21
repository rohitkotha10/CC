#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, u, r, d, l;
    cin >> n >> u >> r >> d >>l;
    bool flag=1;

    if
    (
        l==0 && r==0 && (u==n || d==n)
    ) flag=0;

    if
    (
        u==0 && d==0 && (l==n || r==n)
    ) flag=0;

    if
    (
        l==0 && r==0 && (u==n-1 || d==n-1)
    ) flag=0;

    if
    (
        u==0 && d==0 && (l==n-1 || r==n-1)
    ) flag=0;

    if
    (
        ((l==0 && r==1) || (l==1 && r==0)) && (u>=n-1 || d>=n-1)
    ) flag=0;

    if
    (
        ((u==0 && d==1) || (u==1 && d==0)) && (l>=n-1 || r>=n-1)
    ) flag=0;

    if
    (
        l==1 && r==1 && u==n && d==n
    ) flag=0;

    if
    (
        u==1 && d==1 && l==n && r==n
    ) flag=0;

    if
    (
        l==1 && r==1 && ((u==n-1 && d==n) || (u==n && d==n-1))
    ) flag=0;

    if
    (
        u==1 && d==1 && ((l==n-1 && r==n) || (l==n && r==n-1))
    ) flag=0;



    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    


    


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
