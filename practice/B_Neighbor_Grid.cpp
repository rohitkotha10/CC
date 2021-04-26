/*
author:  rohitkotha10
created: 26.04.2021 17:08:18
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void change(string& s, int prev)
{
    s = s.substr(0, prev) + s.substr(prev + 1, s.size() - prev - 1) + s[prev];
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    rep(i, 0, n - 1, 1)
        rep(j, 0, m - 1, 1)
            cin >> arr[i][j];

            
    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, m - 1, 1)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == m - 1) || (i == n - 1 && j == 0) || (i == n - 1 && j == m - 1))//corners
            {
                if(arr[i][j] >= 3)
                {
                    cout << "NO" << endl;
                    return;
                }
                arr[i][j] = 2;
            }
            else if (i == n - 1 || i == 0 || j == m - 1 || j == 0)//edges
            {
                if(arr[i][j] >= 4)
                {
                    cout << "NO" << endl;
                    return;
                }
                arr[i][j] = 3;
            }
            else //mid
            {
                if(arr[i][j] >= 5)
                {
                    cout << "NO" << endl;
                    return;
                }
                arr[i][j] = 4;
            }
        }
    }

    cout << "YES" << endl;
    rep(i, 0, n - 1, 1)
    {  
        rep(j, 0, m - 1, 1)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
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