/*
author:  rohitkotha10
created: 12.07.2022 20:00:53
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
    for (int i = 0; i < n; i++)
    {
        int cur = arr[i];
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            ans = ans ^ arr[j];
        }
        if (ans == cur)
        {
            cout << ans << endl;
            return;
        }
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
