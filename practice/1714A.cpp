/*
author:  rohitkotha10
created: 02.08.2022 15:35:42
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
    int n, h, m;
    cin >> n >> h >> m;
    int cur = h * 60 + m;
    int mn = 24 * 60 - 1;
    for (int i = 0; i < n; i++)
    {
        int temph, tempm;
        cin >> temph >> tempm;
        int temp = temph * 60 + tempm;
        int ans = temp - cur;
        if (ans < 0)
            ans += 24 * 60;
        mn = min(ans, mn);
    }
    cout << mn / 60 << ' ' << mn % 60 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
