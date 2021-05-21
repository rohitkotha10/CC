/*
author:  rohitkotha10
created: 21.05.2021 19:01:37
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

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << n / 2 << ' ' << n / 2 << endl;
    else
    {
        int a = 1;
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                a = n / i;
                break;
            }
        }

        cout << a << ' ' << n - a << endl;
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
