/*
author:  rohitkotha10
created: 02.08.2022 13:29:06
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
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    if (a.substr(n - m + 1, m - 1) == b.substr(1, m - 1))
    {
        for (int i = 0; i < n - m + 1; i++)
            if (a[i] == b[0])
            {
                cout << "YES" << endl;
                return;
            }
    }
    cout << "NO" << endl;
    return;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
