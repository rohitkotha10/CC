/*
author:  rohitkotha10
created: 14.07.2022 19:38:14
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
    string s;
    cin >> s;
    int ans = 0;
    set<char> cur;
    for (int i = 0; i < s.length(); i++)
    {
        if (cur.size() == 3 && cur.count(s[i]) == 0)
        {
            cur.clear();
            ans++;
            cur.insert(s[i]);
        }
        else
        {
            cur.insert(s[i]);
        }
    }
    if (!cur.empty())
        ans++;
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
