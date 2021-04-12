/*
author:  rohitkotha10
created: 12.04.2021 08:26:12
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << (a ^ b) << endl;   
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
