/*
author:  rohitkotha10
created: 23.05.2021 11:37:00
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
    vector<int> a(n);
    vector<int> b(n);

    rep(i, 0, n - 1, 1)
            cin >>
        a[i];
    rep(i, 0, n - 1, 1)
            cin >>
        b[i];

    vector<int> sol = a;
    sort(sol.begin(), sol.end());
    if (sol == a)
    {
        cout << "Yes" << endl;
        return;
    }

    sort(b.begin(), b.end());
    cout << (b[0] != b[n - 1] ? "Yes" : "No") << endl;
    
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
