/*
author:  rohitkotha10
created: 11.01.2022 17:35:31
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
    int mx = *max_element(arr.begin(), arr.end());
    int change = 0;
    for (int i = 0; i < n; i++)
        change = max(change, mx - arr[i]);

    cout << change << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
