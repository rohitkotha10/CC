/*
author:  rohitkotha10
created: 03.01.2022 18:37:53
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
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    if (sum % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }

    vector<int> arr{a, b, c};
    sort(arr.begin(), arr.end());

    if (arr[0] == arr[1] || arr[1] == arr[2])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << (arr[2] == arr[0] + arr[1] ? "YES" : "NO") << endl;
    }
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
