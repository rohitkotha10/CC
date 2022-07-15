/*
author:  rohitkotha10
created: 14.07.2022 21:50:52
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

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (arr[i] > 0);
    }
    for (int i = 0; i < n - 1; i++)
    {
        ans -= (arr[i] > 0 && arr[i + 1] > 0);
    }
    ans = min(ans, 2LL);
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
