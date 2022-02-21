/*
author:  rohitkotha10
created: 07.07.2021 20:06:13
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
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << ' ' << 0 << endl;
        return;
    }

    if (a > b)
        swap(a, b);

    int diff = b - a;
    cout << diff << ' ';
    int c1 = a / diff;
    int c2 = c1 + 1;

    cout << min(a - diff * c1, diff * c2 - a) << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
