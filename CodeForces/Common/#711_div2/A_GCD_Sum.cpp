#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
};

int gcdsum(int a)
{
    int old = a;
    int ans = 0;
    
    while(a > 0)
    {
        ans += a%10;
        a = a/10;
    }
    return gcd(ans, old);
};


void solve()
{
    int n;
    cin >> n;

    while(true)
    {
        if(gcdsum(n) > 1)
        {
            cout << n << endl;
            return;
        }
        else n++;
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
