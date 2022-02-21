/*
author:  rohitkotha10
created: 29.12.2021 21:08:14
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    map<int, int> sol;
    for (int i = 0; i < n; i++)
    {
        sol[abs(arr[i])]++;
    }

    int ans = 0;
    for (auto i : sol)
    {
        ans++;
        if (i.second > 1 && i.first != 0)
            ans++;
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
