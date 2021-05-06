/*
author:  rohitkotha10
created: 03.05.2021 02:18:21
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

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    rep(i, 0, n - 1, 1)
    {
        char a = s[i];
        rep(j, i + 1, n - 1, 1)
        {
            if (s[j] == a && s[j] != s[j - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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
