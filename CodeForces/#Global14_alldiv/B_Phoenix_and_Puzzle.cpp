/*
author:  rohitkotha10
created: 02.05.2021 20:22:55
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

set<int> sol;
vector<int> dp{0};
void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }


    n /= 2;

    int a = sqrt(n);

    cout << (a * a == n || sol.count(2 * n) == 1 ? "YES" : "NO") << endl;
}

signed main()
{
    rep(i, 0, 1e9, 1)
    {
        int val = dp[i] + (4 * ((2 * i) + 1));
        dp.push_back(val);
        if (val > MOD)
            break;
    }

    rep(i, 0, dp.size() - 1, 1)
        sol.insert(dp[i]);
    int num = 1;
    rep (i, 1, 20, 1)
    {
        num *= 4;
        sol.insert(num);
    }
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
