/*
author:  rohitkotha10
created: 24.04.2021 18:16:53
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
    int n, x, y;
    cin >> n >> x >> y;
    if (n - 1 <= y - x) {
        if ((y - x) % (n - 1) == 0) {
            int d = (y - x) / (n - 1);
            rep(i, 1, n, 1) {
                cout << x + (i - 1) * d << ' ';
            }
            cout << endl;
            return;
        }
        else {
            int d = (y - x) / (n - 1);
            while(d++)
            {
                if ((y - x) % d == 0) {
                    break;
                }
            }
            bool flag = 0;
            int cov = 1 + ((y - x) / d);
            int ind = n - cov;
            while(ind--) {
                x -= d;
                if(x <= 0) {
                    flag = 1;
                    y += d;
                    x += d;
                }
            }
            rep(i, 1, n, 1) {
                cout << x + (i - 1) * d << ' ';
            }
            cout << endl;
            return;
        }
    }

    else {
        int m = min(x - 1, n - 1 - (y - x));
        x = x - m;
        y = y + n - m;
        rep(i, 1, n, 1) {
            cout << x + i - 1 << ' ';
        }
        cout << endl;
        return;
    }
    
}
   

signed main()
{
    IOS;
    int sum = 0;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
/*
2 1 2
2 1 3
2 1 4
2 1 5
2 1 6
2 2 3
2 2 4
2 2 5
2 2 6
2 3 4
2 3 5
2 3 6
2 4 5
2 4 6
2 5 6
3 1 2
3 1 3
3 1 4
3 1 5
3 1 6
3 2 3
3 2 4
3 2 5
3 2 6
3 3 4
3 3 5
3 3 6
3 4 5
3 4 6
3 5 6
4 1 2
4 1 3
4 1 4
4 1 5
4 1 6
4 2 3
4 2 4
4 2 5
4 2 6
4 3 4
4 3 5
4 3 6
4 4 5
4 4 6
4 5 6
5 1 2
5 1 3
5 1 4
5 1 5
5 1 6
5 2 3
5 2 4
5 2 5
5 2 6
5 3 4
5 3 5
5 3 6
5 4 5
5 4 6
5 5 6
6 1 2
6 1 3
6 1 4
6 1 5
6 1 6
6 2 3
6 2 4
6 2 5
6 2 6
6 3 4
*/