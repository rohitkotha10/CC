/*
author:  rohitkotha10
created: 21.05.2021 20:12:43
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: Tutorial
void solve()
{
    int a, b, n, m;
    cin >> a >> b >> n >> m;

    cout << ((a + b >= n + m) && (m <= min(a, b)) ? "Yes" : "No") << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
