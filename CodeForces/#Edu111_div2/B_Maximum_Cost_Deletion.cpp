/*
author:  rohitkotha10
created: 14.07.2021 20:24:35
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
    //ans = an + bk, minimise steps
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            cnt++;
    }
    if (b > 0)
        cnt = n;
    else
        cnt = cnt / 2 + 1;

    cout << a * n + b * cnt << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
