/*
author:  rohitkotha10
created: 21.06.2021 09:10:24
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
//no test
void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> sol(n + 1, 0);
    int sum = 0;
    rep(i, 1, n, 1)
    {
        int temp = (int)s[i -1] - 96;
        sum += temp;
        sol[i] = sum;
    }

    // for (int i : sol)
    //     cout << i << ' ';
    // cout << endl;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << sol[r] - sol[l - 1] << endl;
    }
}

signed main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}
