#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;
//no test case

void solve()
{

    int n, m, curx, cury;
    cin >> n >> m >> curx >> cury;

    int xori = curx;
    int yori = cury;
    int xdiff = m-curx;
    int ydiff = n-cury;

    bool start = 1;
    bool turn = 1; //1for right, 0 for left;
    bool xline = 1; //go same line left
    bool yline = 1; //go down now
    while(n*m --)
    {
        if(start == 1)
        {
            start = 0;
            cout << curx << ' ' << cury << endl;
            continue;
        }

        if(xdiff != 0)
        {
            if(turn == 1)
            {
                xdiff--;
                curx++;
                cout << curx << ' ' << cury << endl;
                continue;
            }
            else
            {
                xdiff--;
                curx--;
                cout << curx << ' ' << cury << endl;
                continue;
            }
            
        }

        if(xdiff == 0)
        {
            turn = 1 - turn;
            if(xline == 1)
            {
                xline = 0;
                curx = xori - 1;
                xdiff = curx - 1;
                cout << curx << ' ' << cury << endl;
                continue;
            }
            else
            {
                xdiff = m;
                cury++;
                cout << curx << ' ' << cury << endl;
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
