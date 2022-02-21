/*
author:  rohitkotha10
created: 03.01.2022 19:19:24
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
    int temp = min_element(s.begin(), s.end()) - s.begin();
    cout << s[temp] << ' ';
    for (int i = 0; i < temp; i++)
        cout << s[i];
    for (int i = temp + 1; i < s.length(); i++)
        cout << s[i];
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
