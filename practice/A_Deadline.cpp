/*
author:  rohitkotha10
created: 19.04.2021 16:06:19
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n, d;
    cin >> n >> d;

    int v = sqrt(d);
    int mi = v - 100;

    int ans = d;

    if(v - 100 <= 0) mi = 101;

    for(int i = mi; i <= v + 100; i++)
    {
        int req = d/v;
        if(d%v != 0) req++;
        req += v - 1;
        ans = min(ans, req);
    }

    ans <= n ? cout << "YES" << endl : cout << "NO" << endl;
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