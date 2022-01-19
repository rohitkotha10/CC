/*
author:  rohitkotha10
created: 11.07.2021 00:33:00
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> sol;
    int cnt = 0;
    int aind = 0;
    int bind = 0;
    while (cnt < n + m)
    {
        bool flag = 0;
        while (k - a[aind] >= 0 && aind < n)
        {
            sol.push_back(a[aind]);
            if (a[aind] == 0)
                k++;
            aind++;
            cnt++;
            flag = 1;
        }

        while (k - b[bind] >= 0 && bind < m)
        {
            sol.push_back(b[bind]);
            if (b[bind] == 0)
                k++;
            bind++;
            cnt++;
            flag = 1;
        }
        if (flag == 0)
        {
            cout << -1 << endl;
            return;
        }
    }

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
