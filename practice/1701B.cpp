/*
author:  rohitkotha10
created: 14.07.2022 19:59:17
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
    int n;
    cin >> n;
    vector<bool> flags(n + 1, 0);
    vector<int> ans;
    int cur = 1;
    while (cur <= n)
    {
        for (int i = cur; i <= n; i *= 2)
        {
            ans.push_back(i);
            flags[i] = 1;
        }
        while (flags[cur] == 1 && cur <= n)
            cur++;
    }
    cout << 2 << endl;
    for (int i : ans)
        cout << i << ' ';
    cout << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
