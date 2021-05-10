/*
author:  rohitkotha10
created: 10.05.2021 14:26:21
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

int testnum = 0;
int testflag = 0;
//no test
int fact(int n)
{
    if (n == 0) return 1;
    int ans = 1;
    rep(i, 1, n, 1)
        ans *= i;
    return ans;
};

int nCr(int n, int r)
{
    return fact(n) / (fact(n - r) * fact(r));
};

void solve()
{
    int n;
    cin >> n;
    //cout << nCr(2, 1) << endl;
    cout << nCr(n, n / 2) * (fact((n / 2) - 1)) * (fact((n / 2) - 1)) / 2 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while (t--)
    {
        testnum++;
        solve();
    }
}
