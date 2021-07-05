/*
author:  rohitkotha10
created: 03.07.2021 18:35:51
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
    n *= 2;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0;
    for (int i : arr)
        if (i % 2 == 1)
            ans++;
    cout << (ans == n / 2 ? "Yes" : "No") << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
