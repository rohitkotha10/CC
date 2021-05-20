/*
author:  rohitkotha10
created: 20.05.2021 21:10:19
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];

    int ans = 0;

    for (int len = 2; len <= n; len++)
    {
        for (int k = 0; k <= n - len; k++)
        {
            multiset<int> all;
            set<int> what;
            for (int i = k; i <= k + len - 1; i++)
            {
                what.insert(arr[i]);
                all.insert(arr[i]);
            }

            for (int i : what)
            {
                int cnt = all.count(i);
                ans += ((cnt) * (cnt - 1)) / 2;
            }

            all.clear();
            what.clear();
        }
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
