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
//sol: Secondthread
void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<int> sol;

    rep(i, 0, n - 2, 1)
    {
        if (a[i] != a[i + 1])
            sol.push_back(i + 1);
    }

    if (a[n - 1] == '1')
        sol.push_back(n);

    vector<int> sol2;

    rep(i, 0, n - 2, 1)
    {
        if (b[i] != b[i + 1])
            sol2.push_back(i + 1);
    }

    if (b[n - 1] == '1')
        sol2.push_back(n);

    reverse(sol2.begin(), sol2.end());

    cout << (int)(sol.size() + sol2.size()) << ' ';
    for (int i : sol)
        cout << i << ' ';
    for (int i : sol2)
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
