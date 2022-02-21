/*
author:  rohitkotha10
created: 25.04.2021 09:14:03
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
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];
    if(n == 1) cout << 0 << endl;
    else if(n == 2)
    {
        if ( arr[0] > arr[1])
        {
            cout << arr[0] - arr[1] << endl;
        }
        else cout << 0 << endl;
    }
    else
    {
        int cnt = 0;
        rep(i, 1, n - 1, 1)
        {
            if(arr[i] - arr[i - 1] < 0)  cnt += arr[i- 1] - arr[i];
        }
        cout << cnt << endl;
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
