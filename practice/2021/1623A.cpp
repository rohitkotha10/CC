/*
author:  rohitkotha10
created: 03.01.2022 18:15:36
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
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;

    int rmin, cmin;
    rmin = abs(rd - rb);
    cmin = abs(cd - cb);
    if (rb > rd)
        rmin += 2 * (n - rb);
    if (cb > cd)
        cmin += 2 * (m - cb);

    cout << min(rmin, cmin) << endl;

}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
