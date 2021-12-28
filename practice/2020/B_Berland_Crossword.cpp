/*
author:  rohitkotha10
created: 08.06.2021 18:01:40
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
    int n, u, r, d, l;
    cin >> n >> u >> r >> d >> l;
    int uc = u, rc = r, dc = d, lc = l;

    for (int i = 0; i < (1 << 4); i++)//1111, each digit represent each corner
    {//UL, UR, DR, DL

        bool flag = 1;
        if (i & 1)
        {
            dc--;
            lc--;
        }

        if (i & 2)
        {
            dc--;
            rc--;
        }

        if (i & 4)
        {
            uc--;
            rc--;
        }

        if (i & 8)
        {
            uc--;
            lc--;
        }

        if (uc < 0 || uc > n - 2 || rc < 0 || rc > n - 2 || dc < 0 || dc > n - 2 || lc < 0 || lc > n - 2)
        {
            flag = 0;
            uc = u;
            rc = r;
            lc = l;
            dc = d;
        }

        if (flag == 1)
        {
            //cout << i << endl;
            cout << "YES" << endl;
            return;
        }


    }

    cout << "NO" << endl;

}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
