#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;
//no test cases
void solve()
{
    double n;
    cin >> n;
    double sum = 0;
    while(n > 0)
    {
        sum += 1.0/n;
        n--;
    }
    cout << fixed << setprecision(12) << sum;
    
}
signed main()
{
    IOS;
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}
