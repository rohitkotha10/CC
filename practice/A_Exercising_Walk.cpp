/*
author:  rohitkotha10
created: 15.04.2021 18:19:02
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;


void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x , y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >>  x2 >> y2;

    if((a > 0 || b > 0) && (x1 == 0 && x2 == 0))
    {
        cout << "No" << endl;
        return;
    }

    if((c > 0 || d > 0) && (y1 == 0 && y2 == 0))
    {
        cout << "No" << endl;
        return;
    }

    int hmin = min(a, b);
    int vmin = min(c, d);

    a = a - hmin;
    b = b - hmin;
    c = c - vmin;
    d = d - vmin;

    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;


   

}

signed main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}