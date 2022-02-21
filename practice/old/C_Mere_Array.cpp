/*
author:  rohitkotha10
created: 20.05.2021 17:18:16
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
        cout << "YES" << endl;
        return;
    }

    vector<int> ok(n, 0);

    rep (i, 0, n - 1, 1)
    {
        if (sol[i] == arr[i])
            ok[i] = 1;//no need to check
    }

    int min = sol[0];

    rep(i, 0, n - 1, 1)
    {
        if (arr[i] % min != 0 && ok[i] == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
