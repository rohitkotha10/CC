/*
author:  rohitkotha10
created: 03.01.2022 20:42:50
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

    int ans = 1;
    if (arr[0] == 1)
        ans++;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1] && arr[i] == 0)
        {
            cout << -1 << endl;
            return;
        }

        if (arr[i] == arr[i - 1] && arr[i] == 1)
            ans += 5;
        else if (arr[i] == 1)
            ans += 1;
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
