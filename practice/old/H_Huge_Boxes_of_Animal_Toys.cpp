/*
author:  rohitkotha10
created: 10.05.2021 15:15:03
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool aa = 0, bb = 0, cc = 0, dd = 0;

    if (b == 0 && c == 0)
    {
        if (a == 0 && d > 0)
            dd = 1;

        if (a > 0)
            (a % 2 == 1 ? aa = 1 : dd = 1);

        cout << (aa ? "Ya" : "Tidak") << ' ';
        cout << (bb ? "Ya" : "Tidak") << ' ';
        cout << (cc ? "Ya" : "Tidak") << ' ';
        cout << (dd ? "Ya" : "Tidak") << ' ';
        cout << endl;
        return;
    }

    if ((a + b) % 2 == 0)
    {
        if (a == 0 && d == 0)
        {
            cc = 1;
            cout << (aa ? "Ya" : "Tidak") << ' ';
            cout << (bb ? "Ya" : "Tidak") << ' ';
            cout << (cc ? "Ya" : "Tidak") << ' ';
            cout << (dd ? "Ya" : "Tidak") << ' ';
            cout << endl;
            return;
        }

        else
        {
            cc = 1;
            dd = 1;
            cout << (aa ? "Ya" : "Tidak") << ' ';
            cout << (bb ? "Ya" : "Tidak") << ' ';
            cout << (cc ? "Ya" : "Tidak") << ' ';
            cout << (dd ? "Ya" : "Tidak") << ' ';
            cout << endl;
            return;
        }
    }

    else
    {
        if (a == 0 && d == 0)
        {
            bb = 1;
            cout << (aa ? "Ya" : "Tidak") << ' ';
            cout << (bb ? "Ya" : "Tidak") << ' ';
            cout << (cc ? "Ya" : "Tidak") << ' ';
            cout << (dd ? "Ya" : "Tidak") << ' ';
            cout << endl;
            return;
        }

        else
        {
            aa = 1;
            bb = 1;
            cout << (aa ? "Ya" : "Tidak") << ' ';
            cout << (bb ? "Ya" : "Tidak") << ' ';
            cout << (cc ? "Ya" : "Tidak") << ' ';
            cout << (dd ? "Ya" : "Tidak") << ' ';
            cout << endl;
            return;
        }
    }
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
