/*
author:  rohitkotha10
created: 20.05.2021 18:26:13
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
    rep(i, 0, n - 1, 1) cin >> arr[i];
    vector<int> sol = arr;
    sort(sol.begin(), sol.end());

    if (arr == sol)
    {
        cout << 0 << endl;
        return;
    }

    if (arr[0] == sol[0] || arr[n - 1] == sol[n - 1])
    {
        cout << 1 << endl;
        return;
    }

    if (arr[0] == sol[n - 1] && arr[n - 1] == sol[0])
    {
        cout << 3 << endl;
        return;
    }

    cout << 2 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
