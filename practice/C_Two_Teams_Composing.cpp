/*
author:  rohitkotha10
created: 15.04.2021 17:32:02
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

    if(n == 1)
    {
        cout << 0 << endl;
        return;
    }

    if(n == 2)
    {
        cout << 1 << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    
    int flag = 0;

    int dis = 1;
    int red = 0;

    rep(i, 1, n - 1, 1)
    {
        if(arr[i] != arr[i - 1]) dis++;
        else
        {
            int cnt = 1;
            while(arr[i] == arr[i - 1])
            {
                cnt++;
                i++;
                if(i == n) break;
            }
            i--;

            red = max(red, cnt);
        }
    }

    if(red >= dis + 1) cout << dis << endl;
    else
    {
        int ans =  min(dis - 1, red);
        ans == 0 ? cout << 1 << endl : cout << ans << endl;
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