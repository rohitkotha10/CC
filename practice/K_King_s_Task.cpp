/*
author:  rohitkotha10
created: 19.04.2021 18:35:56
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//no test case
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(2 * n + 1);
    arr[0] = 0;
    rep(i, 1, 2 * n, 1) cin >> arr[i];


    vector<int> sol(2 * n + 1);
    sol[0] = 0;
    
    rep(i, 1, 2 * n, 1) sol[i] = i;
    int cnt = 0;
    int i = 1;
    while(arr != sol)
    {
        cnt++;
        if(i <= n )
        {
            if(arr[i] > n ) swap(arr[i], arr[n + i]);
            else if(arr[i] > i) swap(arr[i], arr[i + 1]);
        }
        if(i > n)
        {
            if(arr[i] < n ) swap(arr[i], arr[i - n]);
            else if(arr[i] > i) swap(arr[i], arr[i + 1]);
        }
        i++;
        if(i == 2 * n + 1) i = 1;

        rep(i, 1, 2 * n, 1) cout << arr[i] << ' ';
        cout << endl;
        
    }

    cout << cnt << endl;
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