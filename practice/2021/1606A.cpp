/*
author:  rohitkotha10
created: 19.01.2022 21:18:36
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
    string arr;
    cin >> arr;

    if (arr.length() == 1)
        cout << arr << endl;

    else if (arr[0] == arr[arr.length() - 1])
        cout << arr << endl;
    else
        cout << arr[0] << arr.substr(1, arr.length() - 2) << arr[0] << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
