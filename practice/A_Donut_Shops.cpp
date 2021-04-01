#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i,start,endin,incre) for(int i = start; i < endin; i+= incre)
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a > c) 
    {
        cout << -1 << ' ' << b << endl;
        return;
    }

    if(a == c)
    {
        cout  << -1 << ' ' << b << endl;
        return;
    }

    if(a < c)
    {
        if(a*b <= c) cout << 1 << ' ' << -1 << endl;
        else cout << 1 << ' ' << b << endl;//a*b > c;
        return;
    }
}
   

signed main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
