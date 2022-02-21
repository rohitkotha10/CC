/*
author:  rohitkotha10
created: 29.12.2021 14:40:18
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
    int a = sqrt(n);
    int b = cbrt(n);
    int ans = a + b;

    for (int i = 1; i <= b; i++)
    {
        int temp = i * i * i;
        int check = sqrt(temp);
        if (check * check == temp)
        {
            ans--;
        }
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
