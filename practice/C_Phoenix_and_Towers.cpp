/*
author:  rohitkotha10
created: 25.05.2021 22:03:43
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
//sol: tourist shitty tutorial and shitty other solutions, tourist rocks
void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> h(n);
    rep(i, 0, n - 1, 1)
            cin >>
        h[i];

    set<pair<int, int>> s;
    rep(i, 0, m - 1, 1)
        s.emplace(0, i);

    cout << "YES" << endl;
    rep(i, 0, n - 1, 1)
    {
        auto it = s.begin();
        int w = it->first;
        int id = it->second;
        cout << id + 1 << ' ';
        w += h[i];
        s.erase(it);
        s.emplace(w, id);
    }
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
