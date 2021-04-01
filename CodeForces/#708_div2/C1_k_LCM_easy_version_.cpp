#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if(n%3 == 0)
    {
        cout << n/3 << ' ' << n/3 << ' ' << n/3 << endl;
        return;
    }

    if(n%3 == 1)
    {
        
    }

    if(n%3 == 2)
    {
        cout << (n+4)/3 << ' ' << (n-2)/3 << ' ' << (n-2)/3 << endl;
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
