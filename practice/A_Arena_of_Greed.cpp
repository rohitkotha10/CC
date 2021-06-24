/*
author:  rohitkotha10
created: 24.06.2021 16:03:02
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
    int a1 = 0, a2 = 0;
    bool flag = 1;
    while (n > 0)
    {
        while (n % 2 == 0 && n > 0)
        {
            if (flag == 1)
            {
                a1 += n / 2;
                n /= 2;
            }

            else
            {
                a2 += n / 2;
                n /= 2;
            }
        }

        if (flag == 1)
        {
            a1++;
            flag = 0;
        }
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
