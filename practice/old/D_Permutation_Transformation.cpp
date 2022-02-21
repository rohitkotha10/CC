/*
author:  rohitkotha10
created: 21.04.2021 17:49:21
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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> sol(m,0);
 
   rep(i, 0, n - 1, 1)
    {
        cin >> arr[i];
        sol[arr[i]%m]++;
    }

    
 
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if(m == 1)
    {
        cout << 1 << endl;
        return;
    }
    
    int cnt = 0;
    if(sol[0] != 0)
    {
        cnt++;
        sol[0] = 0;
    }

    //cout << m << endl;
    rep(k, 1, (m - 1) / 2, 1)
    {
        //cout << k << ' ' << sol[k] << ' ' << sol[m - k - 1] << endl;
        if(sol[k] != 0 && sol[m - k] != 0)
        {
            int my = min(sol[k], sol[m - k]);
            sol[k] -= my;
            sol[m - k] -= my;
            if(sol[k] != 0) sol[k]--;
            if(sol[m - k] != 0) sol[m - k]--;
            cnt++;
        }

    }

    if(m % 2 == 0)
    {
        if(sol[m / 2] != 0)
        {
            cnt++;
            sol[m / 2] = 0;
        }
    }

    // cout << "H " << cnt << endl;
    // rep(i, 0, m - 1, 1)
    // {
    //     cout << sol[i] << ' ';
    // }
    // cout << endl;

    rep(i, 1, m - 1, 1)
    {
        cnt += sol[i];
    }
 
    cout << cnt << endl;
 

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