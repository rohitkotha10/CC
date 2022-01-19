/*
author:  rohitkotha10
created: 29.04.2021 20:05:32
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
    int r, b, d;
    cin >> r >> b >> d;

    if (r > b)
        swap(r, b);

    int diff = b - r;
    cout << (b <= (r * (1 + d)) ? "YES" : "NO") << endl;
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
