#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    if(n%2 == 1 && m%2 == 1)
    {
        bool od = 1;
        while(n--)
        {
            string s(m,'B');
            //cout << s.size();
            if(od)
            {
                rep(i, 1, m, 2) s[i] = 'W';
            }
            else
            {
                rep(i, 0, m, 2) s[i] = 'W';
            }
            cout << s << endl;
            s = (m,'B');
            od = 1-od;
        }
    }

    else
    {
        string f(m,'B');
        rep(i, 1, m, 2) f[i] = 'W';
        f[1] = 'B';
        bool od = 1;
        cout << f << endl;
        n--;
        while(n--)
        {
            string s(m,'W');
            //cout << s.size();
            if(od)
            {
                rep(i, 1, m, 2) s[i] = 'B';
            }
            else
            {
                rep(i, 0, m, 2) s[i] = 'B';
            }
            cout << s << endl;
            s = (m,'W');
            od = 1-od;
        }
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
