/*
author:  rohitkotha10
created: 20.07.2022 15:25:49
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
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    for (int i = 0; i < c; i++)
    {
        int l, r;
        cin >> l >> r;
        s += s.substr(l - 1, r - l + 1);
    }
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        cout << s[temp - 1] << endl;
    }
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
