/*
author:  rohitkotha10
created: 15.06.2021 19:06:55
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
//copy vector O(n), dont copy sol: tut

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];

    int ans = 0;
    sort(arr.begin(), arr.end());
    rep(i, 0, n - 1, 1)
    {
        int now = arr[i];
        int lhs = l - arr[i];
        int rhs = r - arr[i];
        ans += upper_bound(arr.begin(), arr.end(), rhs) - lower_bound(arr.begin(), arr.end(), lhs);
        if (2 * now >= l && 2 * now <= r)
            ans--;
        //cout << i << ' ' << ans << endl;
    }

    cout << ans / 2 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
