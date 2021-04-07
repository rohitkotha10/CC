#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> s;
    int cnt0 = 0;
    int cnt1 = 0;
    rep(i, 0, n, 1)
    {
        if(s[i] == '0') cnt0++;
        else cnt1++;
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
