#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];
    int x1, y1;
    int x2, y2;
    int flag = 1;
    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, n - 1,1)
        {
            if(arr[i][j] == '*')
            {
                if(flag == 1)
                {
                    flag = 2;
                    x1 = j;
                    y1 = i;
                }
                else if(flag == 2)
                {
                    flag = 3;
                    x2 = j;
                    y2 = i;
                    break;
                }
            }
        }
        if(flag == 3) break;
    }

    arr[y1][x2] = '*';
    arr[y2][x1] = '*';

    // cout << x1 << ' ' << y1 << endl;
    // cout << x2 << ' ' << y2 << endl;

    if(y1 == y2)
    {
        if(y1+1 < n)
        {
            arr[y1 + 1][x2] = '*';
            arr[y1 + 1][x1] = '*';
        }
        else
        {
            arr[y1 - 1][x2] = '*';
            arr[y1 - 1][x1] = '*';
        }
    }

    else if(x1 == x2)
    {
        if(x1+1 < n)
        {
            arr[y1][x1 + 1] = '*';
            arr[y2][x1 + 1] = '*';
        }
        else
        {
            arr[y1][x1 - 1] = '*';
            arr[y2][x1 - 1] = '*';
        }
    }

    rep(i, 0, n - 1, 1)
    {
        cout << arr[i] << endl;
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
