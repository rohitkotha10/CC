/*
author:  rohitkotha10
created: 08.09.2021 20:55:56
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 998244353;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int mx = arr[(int)arr.size() - 1];
    int mn = arr[(int)arr.size() - 2];

    int cntmx = 0;
    int cntmn = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == mx)
            cntmx++;
        else if (arr[i] == mn)
            cntmn++;
        else
            break;
    }

    int ans = 1;
    if (cntmx > 1)
    {
        for (int i = 1; i <= n; i++)
            ans = (ans * i) % MOD;
    }

    else if (mx - mn > 1)
    {
        cout << 0 << endl;
        return;
    }

    else
    {
        //cntmn! * cntmn * (n)P(n- 1 - cntmn)
        for (int i = 1; i <= cntmn; i++)
            ans = (ans * i) % MOD;
        ans = (ans * cntmn) % MOD;
        int rem = cntmn + 2;
        for (int i = n; i >= rem; i--)
            ans = (ans * i) % MOD;
    }

    // cout << cntmx << ' ' << cntmn << ' ';
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
