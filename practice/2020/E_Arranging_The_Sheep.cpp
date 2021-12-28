/*
author:  rohitkotha10
created: 25.05.2021 17:33:49
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
    string s;
    cin >> s;

    vector<int> arr;
    rep(i, 0, n - 1, 1)
    {
        if (s[i] == '*')
            arr.push_back(i);
    }

    n = (int)arr.size();
    if (n <= 1)
    {
        cout << 0 << endl;
        return;
    }
    rep(i, 0, n - 1, 1)
        arr[i] -= i;

    sort(arr.begin(), arr.end());
    int median = arr[n / 2];
    int ans = 0;
    rep(i, 0, n - 1, 1)
    {
        ans += abs(median - arr[i]);
    }

    int ans2 = 0;
    median = arr[(n / 2) + 1];
    rep(i, 0, n - 1, 1)
    {
        ans2 += abs(median - arr[i]);
    }
    cout << min(ans, ans2) << endl;

}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
