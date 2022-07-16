/*
author:  rohitkotha10
created: 16.07.2022 10:10:27
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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n > m)
        cout << "NO" << endl;
    else
    {
        sort(arr.rbegin(), arr.rend());
        int cur = 0;
        for (int i = 1; i < n; i++)
        {
            cur += max(arr[i - 1], arr[i]) + 1;
        }

        cur += max(arr.front(), arr.back()) + 1;
        cout << (cur > m ? "NO" : "YES") << endl;
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
