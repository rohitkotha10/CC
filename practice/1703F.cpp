/*
author:  rohitkotha10
created: 18.07.2022 21:01:06
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
    vector<int> arr(n + 1);
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++)
        if (arr[i] < i)
            ans[arr[i]]++;

    vector<int> presum(n + 1, 0);
    presum[n] = ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        presum[i] = presum[i + 1] + ans[i];
    }

    int cnt = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] < i)
            cnt += presum[i + 1];
    }

    cout << cnt << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
