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
//sol: tut
void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    bool flag = 1;
    while (n > 0)
    {
        if (n % 2 == 0 && !(n % 4 == 0 && n > 8))
        {
            if (flag == 1)
            {
                cnt += n / 2;
                flag = 0;
            }
            else
                flag = 1;
            n /= 2;
        }
        else
        {
            if (flag == 1)
            {
                cnt++;
                flag = 0;
            }
            else
                flag = 1;
            n--;
        }
    }
    cout << cnt << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
