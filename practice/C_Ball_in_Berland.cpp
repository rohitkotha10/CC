/*
author:  rohitkotha10
created: 08.06.2021 19:48:55
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
//sol: neal wu
void solve()
{
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> arra(k), arrb(k);
    vector<int> acnt(a + 1, 0), bcnt(b + 1, 0);
    rep(i, 0, k - 1, 1)
    {
        cin >> arra[i];
        arra[i]--;
        acnt[arra[i]]++;
    }
    rep(i, 0, k - 1, 1)
    {
        cin >> arrb[i];
        arrb[i]--;
        bcnt[arrb[i]]++;
    }

    int ans = (k * (k - 1));

    if (k == 1 || a == 1 || b == 1)
    {
        cout << 0 << endl;
        return;
    }

    rep(i, 0, k - 1, 1)
    {
        ans -= acnt[arra[i]] + bcnt[arrb[i]] - 2;
    }

    cout << ans / 2 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
