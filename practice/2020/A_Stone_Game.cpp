/*
author:  rohitkotha10
created: 15.06.2021 18:46:57
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

    int first = 0, last = 0;

    auto b = max_element(arr.begin(), arr.end());
    auto a = min_element(arr.begin(), arr.end());

    first = a - arr.begin();
    last = b - arr.begin();
    first++;
    last++;

    // cout << first << ' ' << last << endl;
    int c1 = max(first, last);
    int c2 = n + 1 - min(first, last);
    int c3 = min(c2, c1);
    int ans = min(c3, min(first, last) + n + 1 - max(first, last));
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
