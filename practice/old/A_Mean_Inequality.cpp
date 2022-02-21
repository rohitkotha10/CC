/*
author:  rohitkotha10
created: 29.05.2021 02:21:52
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
    vector<int> arr(2 * n);
    rep(i, 0, 2 * n - 1, 1)
            cin >>
        arr[i];
    vector<int> sol(2 * n);
    sort(arr.begin(), arr.end());
    rep(i, 0, n - 1, 1)
        sol[i * 2] = arr[i];
    rep(i, n, 2 * n - 1, 1)
        sol[(i - n) * 2 + 1] = arr[i];
    for (int i : sol)
        cout << i << ' ';
    cout << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
