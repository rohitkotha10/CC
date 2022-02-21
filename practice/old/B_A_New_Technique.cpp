#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> narr(n);
    vector<vector<int>> marr(m);

    rep(i, 0, n-1, 1)
    {
        rep(j, 0, m-1, 1)
        {
            int val;
            cin >> val;
            narr[i].push_back(val);
        }
    }

    rep(i, 0, m-1, 1)
    {
        rep(j, 0, n-1, 1)
        {
            int val;
            cin >> val;
            marr[i].push_back(val);
        }
    }


    int k = 0;
    bool flag = 0;
    int map = 0;

    vector<vector<int>> sol;
    rep(i, 0, n-1, 1)
    {
        int fir = marr[0][i];
        //cout << fir << " FIR\n";
        if(flag == 1)
        {
            rep(j, 0, n-1, 1)
            {
                if(narr[j][map] == fir)
                {
                    sol.push_back(narr[j]);
                    break;
                }
            }
        }
        else
        {
            rep(i1, 0, n-1, 1)
            {
                rep(j1, 0, m-1, 1)
                {
                    if(narr[i1][j1] == fir)
                    {
                        flag = 1;
                        sol.push_back(narr[i1]);
                        map = j1;
                        break;
                    }
                }
                if(flag == 1) break;
            }
        }
        
    }

    //cout << sol.size() << endl;
    

    //cout << marr[0][0] << ' ' << narr[0][0] << endl;

    
    rep(i, 0, n-1, 1)
    {
        rep(j, 0, m-1, 1)
        {
            cout << sol[i][j] << ' ';
        }
        cout << endl;
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
