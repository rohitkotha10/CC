/*
author:  rohitkotha10
created: 28.06.2021 21:11:16
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> w(k);
    for (int i = 0; i < k; i++)
        cin >> w[i];

    int ans = 0;
    sort(a.rbegin(), a.rend());
    sort(w.begin(), w.end());

    int sub = -1;

    for (int i = 0; i < k; i++)
    {
        if (w[i] != 1)
        {
            sub = i;
            break;
        }
        else
            ans += 2 * a[i];
    }

    if (sub == -1)
    {
        cout << ans << endl;
        return;
    }

    sort(w.rbegin(), w.rend());
    sort(a.begin(), a.end());

    k -= sub;
    n -= sub;
    a.resize(n);
    w.resize(k);

    // cout << k << ' ' << n << endl;

    sort(a.rbegin(), a.rend());

    for (int i = 0; i < k; i++)
        ans += a[i];
    sort(a.begin(), a.end());

    int j = 0;
    for (int i = 0; i < k; i++)
    {
        ans += a[j];
        j += w[i] - 1;
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
