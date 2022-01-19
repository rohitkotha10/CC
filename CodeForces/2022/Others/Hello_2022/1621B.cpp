/*
author:  rohitkotha10
created: 05.01.2022 00:42:32
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
    int n;
    cin >> n;
    vector<int> larr(n);
    vector<int> rarr(n);
    vector<int> carr(n);

    for (int i = 0; i < n; i++)
        cin >> larr[i] >> rarr[i] >> carr[i];

    int mn = larr[0];
    int mx = rarr[0];

    vector<int> lsol{0};
    vector<int> rsol{0};

    int lcost = MOD;
    int rcost = MOD;
    int bcost = MOD;

    int litr = 0;
    int ritr = 0;
    int bitr = 0;

    for (int i = 0; i < n; i++)
    {

        if (larr[i] < mn)
            mn = larr[i],
            lcost = carr[i];
        if (larr[i] == mn)
            lcost = min(lcost, carr[i]);

        if (rarr[i] > mx)
            mx = rarr[i],
            rcost = carr[i];
        if (rarr[i] == mx)
            rcost = min(rcost, carr[i]);

        int ans = lcost + rcost;
        if (larr[i] == mn && rarr[i] == mx)

            cout << "T ",
                ans = min(ans, carr[i]);

        cout << ans << ' ' << lcost << ' ' << rcost << endl;
        // cout << ans << endl;
    }
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
