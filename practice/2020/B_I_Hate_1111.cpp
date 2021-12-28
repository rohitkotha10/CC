/*
author:  rohitkotha10
created: 29.05.2021 02:39:37
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
//sol: tut
set<int> s;
void solve()
{
    int n;
    cin >> n;
    if (n % 11 == 0 || n > 1099) 
    {
        cout << "YES" << endl;
        return;
    }

    cout << (s.count(n) == 1 ? "YES" : "NO") << endl;
}

signed main()
{
    IOS;

    int t = 1;
    cin >> t;
    for (int a = 0; a <= 100; a++)
    {
        for (int b = 0; b <= 10; b++)
        {
            s.insert(a * 11 + b * 111);
        }
    }

    while (t--)
        solve();
}
