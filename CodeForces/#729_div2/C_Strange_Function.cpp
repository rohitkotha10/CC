/*
author:  rohitkotha10
created: 03.07.2021 19:45:49
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tut
int Lcm(int a, int b)
{
    return (a * b / __gcd(a, b));
}

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    int lc1 = 1;
    int lc2 = Lcm(1, 2);
    int i = 2;
    while (lc1 <= n)
    {
        int cur = 2;
        int add = n / lc1 - n / lc2;
        add %= MOD;
        ans = (ans + (add * i)) % MOD;
        i++;
        lc1 = lc2;
        lc2 = Lcm(lc2, i);
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
