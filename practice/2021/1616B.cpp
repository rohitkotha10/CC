/*
author:  rohitkotha10
created: 29.12.2021 21:18:15
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
    string s;
    cin >> s;

    string ans;
    bool flag = 0;

    ans += s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] < s[i - 1] || (s[i] == s[i - 1] && flag == 1))
        {
            ans += s[i];
            if (s[i] != s[i - 1])
                flag = 1;
        }
        else
            break;
    }

    cout << ans;
    reverse(ans.begin(), ans.end());
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
