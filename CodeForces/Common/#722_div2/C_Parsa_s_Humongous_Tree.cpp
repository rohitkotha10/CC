/*
author:  rohitkotha10
created: 25.05.2021 08:37:29
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
    vector<int> larr(n);
    vector<int> rarr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        larr[i] >> rarr[i];

    vector<pair<int, int>> con(n - 1);
    rep(i, 0, n - 2, 1)
            cin >>
        con[i].first >> con[i].second;

    int sum = 0;

    if (n == 2)
    {
        int u = con[0].first - 1;
        int v = con[0].second - 1;
        cout << max(abs(rarr[v] - larr[u]), abs(rarr[u] - larr[v])) << endl;
        return;
    }
    cout << "May not ";
    rep(i, 0, n - 2, 1)
    {
        int u = con[i].first - 1;
        int v = con[i].second - 1;

        int ans = max(abs(rarr[v] - larr[u]), abs(rarr[u] - larr[v]));
        sum += ans;
    }

    cout << sum << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
