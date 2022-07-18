/*
author:  rohitkotha10
created: 18.07.2022 08:03:34
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
    set<char> arr;
    for (int i = 0; i < n; i++)
        arr.insert(s[i]);
    cout << n + arr.size() << endl;

}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
