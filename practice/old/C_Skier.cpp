/*
author:  rohitkotha10
created: 30.06.2021 08:43:39
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//need paths taken not point reached
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    set<pair<pair<int, int>, pair<int, int>>> paths;
    int ans = 0;
    int x = 0, y = 0;
    int xold = 0, yold = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
            y++;
        else if (s[i] == 'S')
            y--;
        else if (s[i] == 'W')
            x--;
        else
            x++;

        auto to1 = make_pair(make_pair(xold, yold), make_pair(x, y));
        auto to2 = make_pair(make_pair(x, y), make_pair(xold, yold));
        if (paths.count(to1) == 1 || paths.count(to2) == 1)
            ans += 1;
        else
        {
            paths.insert(to1);
            paths.insert(to2);
            ans += 5;
        }
        xold = x;
        yold = y;
        // cout << s[i] << ' ' << x << ' ' << y << ' ' << ans << endl;
    }

    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
