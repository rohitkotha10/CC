/*
author:  rohitkotha10
created: 25.06.2021 09:14:56
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tut
void solve()
{
    int n, p, k;
    cin >> n >> p >> k;
    p--;
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = s[i] - '0';
    vector<int> c(n);
    for (int i = 0; i <= k - 1; i++)
        c[n - 1 - i] = 1 - arr[n - 1 - i];

    for (int i = n - k - 1; i >= 0; i--)
        c[i] = 1 - arr[i] + c[i + k];

    // for (int i : c)
    //     cout << i << ' ';
    // cout << endl;

    int ans = n * x;
    for (int i = 0; i < n; i++)
    {
        if (i < p)
            continue;
        ans = min(ans, c[i] * x + (i - p) * y);
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
