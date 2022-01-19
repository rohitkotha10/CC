/*
author:  rohitkotha10
created: 29.12.2021 15:09:14
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
    int n = 7;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int a = arr[0];
    int b = arr[1];
    int c = arr[6] - arr[0] - arr[1];
    cout << a << ' ' << b << ' ' << c << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
