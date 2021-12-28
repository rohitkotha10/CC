/*
author:  rohitkotha10
created: 29.06.2021 08:48:09
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

    if (n <= 2)
    {
        cout << 0 << endl;
        return;
    }

    int ans = 0;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
        ans += (n - 1 - 2 * i) * arr[i];
    ans += arr.back();
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
