#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;


int sumcheck(int x0, int x1, int x2, int y0, int y1, int y2 )
{
    int cnt = 0;
    while(x2 > 0 && y1 > 0)
    {
        int t = min(x2, y1);
        cnt += t;
        x2 -= t;
        y1 -= t;
    }

    while(x2 > 0 && y2 > 0)
    {
        int t = min(x2, y2);
        x2 -= t;
        y2 -= t;
    }

    while(x2 > 0 && y0 > 0)
    {
        int t = min(x2, y0);
        x2 -= t;
        y0 -= t;
    }

    while(x0 > 0 && y2 > 0)
    {
        int t = min(x0, y2);
        x0 -= t;
        y2 -= t;
    }

    while(x1 > 0 && y1 > 0)
    {
        int t = min(x1, y1);
        x1 -= t;
        y1 -= t;
    }

    while(x1 > 0 && y0 > 0)
    {
        int t = min(x1, y0);
        x1 -= t;
        y0 -= t;
    }

    while(x0 > 0 && y1 > 0)
    {
        int t = min(x0, y1);
        x0 -= t;
        y1 -= t;
    }

    while(x1 > 0 && y2 > 0)
    {
        int t = min(x1, y2);
        cnt -= t;
        x1 -= t;
        y2 -= t;
    }

    while(x0 > 0 && y0 > 0)
    {
        int t = min(x0, y0);
        x0 -= t;
        y0 -= t;
    }

    // cout << "CNTX: " << x0 << ' ' << x1 << ' ' << x2 << endl;
    // cout << "CNTY: " << y0 << ' ' << y1 << ' ' << y2 << endl;

    return cnt * 2;
}

void solve()
{
    int x0, x1, x2, y0, y1, y2;
    cin >> x0 >> x1 >> x2 >> y0 >> y1 >> y2;

    int ans = sumcheck(x0, x1, x2, y0, y1, y2);
    cout << ans << endl;
    

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
