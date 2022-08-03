/*
author:  rohitkotha10
created: 02.08.2022 14:21:48
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
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> doors{0, a, b, c};
    if (doors[n] == 0 ||
        doors[doors[n]] == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
