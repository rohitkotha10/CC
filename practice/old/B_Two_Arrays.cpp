#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

//sol credits: tutorial
void solve()
{
    int n, t;
    cin >> n >> t;
    int flag = 0;
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        if(t%2 == 0)
        {
            if(val == t/2)
            {
                if(flag == 0)
                {
                    cout << 1 << ' ';
                    flag = 1;
                }
                else
                {
                    cout << 0 << ' ';
                    flag = 0;
                }
            }

            else if(val > t/2)
            {
                cout << 1 << ' ';
            }

            else cout << 0 << ' ';
        }


        else
        {
            if(val <= t/2)
            {
                cout << 1 << ' ';
            }
            else 
            {
                cout << 0 << ' ';
            }
        }
    }

    cout << endl;



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
