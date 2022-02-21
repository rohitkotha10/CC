/*
author:  rohitkotha10
created: 30.06.2021 08:03:17
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
    float n;
    cin >> n;
    n *= 2;
    float pi = 3.14159265358979323846;
    float theta = pi / n;
    float ans = abs(cos(theta) / sin(theta));
    cout << fixed << setprecision(9) << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
