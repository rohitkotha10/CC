#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int copy = n;
    int dig = 0;
    while(copy > 0)
    {
        dig++;
        copy /= 10;
    }

    int ans = 9*(dig-1);
    int check = pow(10,dig);
    check--;
    check /= 9;

    int mul = 0;
    rep(i, 1, 9, 1)
    {
        if(n >= i*check) mul = i;
        else break;
    }

    ans += mul;
    cout << ans << endl;
    
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
