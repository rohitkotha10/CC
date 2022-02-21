/*
author:  rohitkotha10
created: 03.01.2022 18:55:42
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
    string s, q;
    cin >> s >> q;
    map<char, int> arr;
    for (int i = 0; i < 26; i++)
        arr[s[i]] = i + 1;

    int ans = 0;
    int cur = 0;
    for (int i = 1; i < q.length(); i++)
    {
        ans += abs(arr[q[i]] - arr[q[i - 1]]);
        cur = arr[arr[q[i]]];
    }
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
