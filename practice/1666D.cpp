/*
author:  rohitkotha10
created: 16.07.2022 10:34:43
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
    string s, t;
    cin >> s >> t;
    int n = s.length();
    int cur = n - 1;
    int req = n;
    while (t.length() > 0 && cur >= 0)
    {
        if (s[cur] == t.back())
        {
            if (cur > req)
            {
                cout << "NO" << endl;
                return;
            }
            t.pop_back();
            s[cur] = '#';
            req = cur;
            cur = n - 1;
        }
        else
            cur--;
    }
    cout << (t.length() == 0 ? "YES" : "NO") << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
