/*
author:  rohitkotha10
created: 29.12.2021 15:16:07
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
    int a = count(s.begin(), s.end(), 'a');
    int b = count(s.begin(), s.end(), 'b');
    int c = count(s.begin(), s.end(), 'c');

    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'b' && s[i] != 'c')
        {
            ans += s[i];
        }
    }
    sort(ans.begin(), ans.end());

    cout << string(a, 'a');
    if (t == "abc" && a >= 1 && b >= 1 && c >= 1)
        cout << string(c, 'c') << string(b, 'b');
    else
        cout << string(b, 'b') << string(c, 'c');
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
