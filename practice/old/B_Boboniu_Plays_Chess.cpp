/*
author:  rohitkotha10
created: 12.04.2021 08:39:40
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

void solve()
{

    int n, m, curx, cury;
    cin >> n >> m >> cury >> curx;

    int xori = curx;
    int yori = cury;
    int xdiff = m-curx;
    int ydiff = n-cury;

    bool start = 1;
    bool turn = 1; //1for right, 0 for left;
    bool xline = 1; //go same line left
    bool yline = 1; //go down now
    int ans = n * m;
    while(ans--)
    {
        if(start == 1)
        {
            start = 0;
            cout << cury << ' ' << curx << endl;
            continue;
        }

        if(xdiff != 0)
        {
            if(turn == 1)
            {
                xdiff--;
                curx++;
                cout << cury << ' ' << curx << endl;
                continue;
            }
            else
            {
                xdiff--;
                curx--;
                cout << cury << ' ' << curx << endl;
                continue;
            }
            
        }
        if(cury == 1)
        {
            cury = n;
            xdiff = m - 1;
            turn = 1 - turn;
            cout << cury << ' ' << curx << endl;
            continue;
        }

        if(xdiff == 0)
        {
            turn = 1 - turn;

            if(xline == 1)
            {
                xline = 0;
                if(xori == 1)
                {
                    cury--;
                    xdiff = m - 1;
                    cout << cury << ' ' << curx << endl;
                    continue;
                }
                curx = xori - 1;
                xdiff = curx - 1;
                cout << cury << ' ' << curx << endl;
                continue;
            }
            else
            {
                xdiff = m - 1;
                cury--;
                cout << cury << ' ' << curx << endl;
                continue;

            }
        }


    }

    

}
signed main()
{
    IOS;
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}
