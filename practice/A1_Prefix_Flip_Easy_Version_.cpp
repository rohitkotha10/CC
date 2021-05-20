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
    string a, b;
    cin >> a >> b;
    vector<int> sol;
    rep(i, 0, n - 1, 1)
    {
        if (a[i] != b[i])
        {
            if (i == 0)
            {
                sol.push_back(i + 1);
                continue;
            }
            sol.push_back(i + 1);
            sol.push_back(i);
        }
    }
    cout << sol.size() << ' ';
    if (sol.size() % 2 == 1)
        
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
