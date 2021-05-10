/*
author:  rohitkotha10
created: 03.05.2021 02:18:21
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
#define all(a) a.begin(), a.end()

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int testnum = 0;
int testflag = 0;
//sol: tut
void solve()
{
    int a, b;
    cin >> a >> b;
    string arr;
    cin >> arr;

    vector<int> sol;
    rep(i, 0, arr.size() - 1, 1)
    {
        if (arr[i] == '1')
            sol.push_back(i);
    }

    if (sol.size() <= 1)
    {
        cout << sol.size() * a << endl;
        return;
    }

    vector<pair<int, int>> fin;

    int ans = 0;
    rep(i, 1, sol.size() - 1, 1)
    {
        int val = sol[i] - sol[i - 1];
        if ((val - 1) * b <= a)
        {
            fin.emplace_back(sol[i - 1], sol[i]);
            ans += (val - 1) * b;
        }
    }

    if (fin.size() == 0)
    {
        cout << sol.size() * a << endl;
        return;
    }

    int tot = 2 * fin.size();

    if (fin.size() == 1)
    {
        ans += a;
    }

    else
    {
        rep(i, 0, fin.size() - 1, 1)
        {
            if (i + 1 < fin.size() && fin[i].second == fin[i + 1].first)
            {
                tot--;
                continue;
            }
            ans += a;
        }
    }

    ans += (sol.size() - tot) * a;

    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        testnum++;
        solve();
    }
}