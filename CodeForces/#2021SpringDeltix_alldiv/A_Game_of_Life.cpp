/*
author:  rohitkotha10
created: 30.05.2021 20:05:15
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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int steps = 0;
    while (steps < min(n, m))
    {
        if (s[1] == '1')
            s[0] = '1';
        if (s[n - 2] == '1')
            s[n - 1] = '1';
        set<int> add;
        rep(i, 1, n - 2, 1)
        {
            if (s[i] == '0')
            {
                if (s[i - 1] == '1' && s[i + 1] == '1')
                    continue;
                else if (s[i - 1] == '0' && s[i + 1] == '0')
                    continue;
                else
                    add.insert(i);
            }
        }

        for (int i : add)
            s[i] = '1';
        //cout << steps << ' ' << s << endl;
        steps++;
    }

    cout << s << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
