/*
author:  rohitkotha10
created: 19.01.2022 18:07:09
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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> l(n / 2, a);
    vector<int> r(n / 2, b);

    if (a >= n / 2 + 2 || b <= n / 2 - 1)
    {
        cout << -1 << endl;
        return;
    }

    int temp = n;
    for (int i = 1; i < n / 2; i++)
    {
        if (temp == b)
            temp--;
        if (temp == a)
        {
            cout << -1 << endl;
            return;
        }
        l[i] = temp--;
    }
    temp = 1;
    for (int i = 1; i < n / 2; i++)
    {
        if (temp == a)
            temp++;
        if (temp == b)
        {
            cout << -1 << endl;
            return;
        }
        r[i] = temp++;
    }

    for (int i : l)
        cout << i << ' ';
    for (int i : r)
        cout << i << ' ';
    cout << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
