#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    char one='1';
    char seven='7';
    if(n%2==0)
    {
        for(int i = 1;i <= n/2; i++) cout<<one;
        cout<<endl;
    }

    else
    {
        cout<<seven;
        for(int i = 1; i <= (n-3)/2; i++) cout<<one;
        cout<<endl;
    }

}
    
   

signed main()
{
    IOS;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
