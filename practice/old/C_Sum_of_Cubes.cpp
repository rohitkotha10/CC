#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for(int i = 1; i*i*i < n; i++)
    {
        int c1 = i*i*i;
        if(c1 > n) break;
        int a = cbrt(n - c1);
        if(a*a*a == n-c1)
        {
            cout << "YES\n";
            return;
        } 
    }

    cout << "NO\n";
   
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
