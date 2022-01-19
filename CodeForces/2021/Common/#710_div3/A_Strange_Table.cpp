#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;

    int a = 0;
    int b = 0;
    b = (x-1)/n;
    b++;
    a = x-n*(b-1);
    cout << (a-1)*m + b << endl;
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
