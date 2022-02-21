/*
author:  rohitkotha10
created: 20.05.2021 20:05:44
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

int F2(int n)
{
    int i = 1;
    while (true)
    {
        i *= 2;
        if (i > n)
            break;
    }

    return (i / 2);
}

void solve()
{
    int n;
    cin >> n;
    int ans = F2(n) - 1;
    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
