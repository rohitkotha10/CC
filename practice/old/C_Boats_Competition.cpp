/*
author:  rohitkotha10
created: 24.04.2021 21:15:17
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
    vector<int> arr(105, 0);
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        arr[val]++;
    }

    int sum = 2 * n;
    int ans = 0;

    while(sum > 0)
    {
        //sum = 12;
        int mx = 0;
        rep(i, 1, sum / 2, 1)
        {
            //i = sum / 2;
            int a = arr[i];
            int b = arr[sum - i];
            //cout << i << ' ' << a << ' ' << b << ' ' << sum << endl;
            if(2 * i == sum) mx += arr[i] / 2;
            else mx += min(a, b);
        }
        ans = max(mx, ans);
        sum--;
    }
    //cout << arr[14 - 6] << endl;
    cout << ans << endl;

    
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
