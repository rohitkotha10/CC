/*
author:  rohitkotha10
created: 19.01.2022 17:50:46
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int dig(int a)
{
    int ans = 0;
    while (a > 0)
    {
        a /= 10;
        ans++;
    }
    return ans;
}

void normalize(int &a, int &b)
{
    int digs = dig(a);
    if (digs == 7)
        return;
    int add = min(7 - digs, b);
    b -= add;
    a *= pow(10, add);
}   

void solve()
{
    int x1, x2, p1, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    normalize(x1, p1);
    normalize(x2, p2);
    // cout << x1 << ' ' << p1 << endl;
    // return;

    if (p1 > p2)
        cout << '>' << endl;
    else if (p1 < p2)
        cout << '<' << endl;
    else
    {
        if (x1 > x2)
            cout << '>' << endl;
        else if (x1 < x2)
            cout << '<' << endl;
        else
            cout << '=' << endl;
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
