/*
author:  rohitkotha10
created: 21.06.2021 09:46:46
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//no test
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    vector<int> fill;

    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - arr[i - 1];

        if (diff <= x)
            continue;
        else
        {
            int needed = (diff - 1) / x;
            fill.push_back(needed);
        }
    }

    sort(fill.begin(), fill.end());

    int sum = 0;
    int ans = fill.size() + 1;
    for (int i = 0; i < fill.size(); i++)
    {
        sum += fill[i];
        if (sum > k)
            break;
        else
            ans--;
    }

    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}
