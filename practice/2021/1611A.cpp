/*
author:  rohitkotha10
created: 03.01.2022 18:48:00
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool isEv(char ch)
{
    if (ch == '2' ||
        ch == '4' ||
        ch == '6' ||
        ch == '8')
        return true;
    return false;
}
void solve()
{
    string s;
    cin >> s;
    if (isEv(s.back()))
    {
        cout << 0 << endl;
        return;
    }

    if (isEv(s.front()))
    {
        cout << 1 << endl;
        return;
    }

    for (int i = 1; i < s.length() - 1; i++)
    {
        if (isEv(s[i])) {
            cout << 2 << endl;
            return;
        }
    }

    cout << -1 << endl;
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
