/*
author:  rohitkotha10
created: 15.04.2021 17:59:01
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int double
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;


void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    vector<int> poor;
    int extra = 0;
    int we = 0;
    rep(i, 0, n - 1, 1)
    {
        if(arr[i] >= x)
        {
            we++;
            extra += arr[i] - x;
        } 
        else poor.push_back(arr[i]);
    }

    if(we == n)
    {
        cout << n << endl;
        return;
    }

    sort(poor.rbegin(), poor.rend());

    int sz = poor.size();
    int cnt = 0;

    //cout << we << ' ' << extra << ' ' << sz << endl;

    rep(i, 0, sz - 1, 1)
    {
        extra += poor[i];
        cnt++;
        int req = ( (we * x) + (extra) ) / (we + cnt);
        //cout << req << endl;
        if(req < x)
        {
            cnt--;
            break;
        }
    }

    cout << cnt + we << endl;

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