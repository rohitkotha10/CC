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
//solution tutorial 
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x , y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >>  x2 >> y2;

    if(((x2 - x >= b - a && x - x1 >= a - b) && (x1 < x2 || a + b == 0))    &&    ((y2 - y >= d - c && y - y1 >= c - d) && (y1 < y2 || c + d == 0)))
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }

    


   

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