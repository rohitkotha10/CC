/*
author:  rohitkotha10
created: 06.07.2021 17:31:24
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tut
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> larr(n + 1);
    vector<int> rarr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        if (i <= l)
            larr[val]++;
        else
            rarr[val]++;
    }
    for (int i = 1; i <= n; i++)
    {
        int take = min(larr[i], rarr[i]);
        larr[i] -= take;
        rarr[i] -= take;
        l -= take;
        r -= take;
    }
    if (r > l)
    {
        swap(rarr, larr);
        swap(r, l);
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        int extra = l - r;
        int leven = larr[i] / 2;
        int remove = min(leven * 2, extra);
        l -= remove;
        ans += remove / 2;
    }

    cout << ans + l << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
