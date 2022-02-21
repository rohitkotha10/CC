/*
author:  rohitkotha10
created: 18.01.2022 13:56:54
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
    map<char, int> sol;
    for (int i = 0; i < s.length(); i++)
    {
        sol[s[i]]++;
    }

    for (auto i : sol)
        if (i.second == 2)
            cout << i.first << i.first;
        else if (i.second == 1)
            cout << i.first;
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
