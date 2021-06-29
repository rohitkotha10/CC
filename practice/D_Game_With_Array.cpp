/*
author:  rohitkotha10
created: 29.06.2021 19:56:27
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

signed main()
{
    IOS;
    int n, s;
    cin >> n >> s;
    if (n * 2 <= s)
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n - 1; i++)
            cout << 2 << ' ';
        cout << s - (2 * (n - 1)) << endl;
        cout << 1 << endl;
        return 0;
    }

    cout << "NO" << endl;
}
