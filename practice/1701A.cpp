/*
author:  rohitkotha10
created: 14.07.2022 20:29:39
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int tl, tr, bl, br;
    cin >> tl >> tr;
    cin >> bl >> br;
    if (tl == 1 && tr == 1 && bl == 1 && br == 1)
        cout << 2 << endl;
    else if (tl == 0 && tr == 0 && bl == 0 && br == 0)
        cout << 0 << endl;
    else
        cout << 1 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
