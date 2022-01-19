/*
author:  rohitkotha10
created: 11.07.2021 00:26:53
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
    int end = 97 + s.length() - 1;
    int fir = 0;
    int las = s.size() - 1;
    for (int i = end; i >= 97; i--)
    {
        char cur = i;
        if (s[fir] == cur)
            fir++;
        else if (s[las] == cur)
            las--;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
