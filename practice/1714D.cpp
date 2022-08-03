/*
author:  rohitkotha10
created: 02.08.2022 16:25:08
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool comp(const string &s1, const string &s2)
{
    if (s1.length() != s2.length())
        return s1.length() < s2.length();
    return s1 < s2;
}
void solve()
{
    string t;
    cin >> t;
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.rbegin(), arr.rend(), comp);
    for (auto i : arr)
        cout << i << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
