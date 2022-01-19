/*
author:  rohitkotha10
created: 07.05.2021 20:07:52
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

const int MAX = 2e18 + 5;
const int MOD = 1e9 + 7;

int testnum = 0;
int testflag = 0;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
};

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
};

void solve()
{
    int a, b;
    cin >> a >> b;

    if (b == 1) cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << a << ' ' << a * (2 * b - 1) << ' ' << 2 * a * b << endl;
    }
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
