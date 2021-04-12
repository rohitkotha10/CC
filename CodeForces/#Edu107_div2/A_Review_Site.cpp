/*
author:  rohitkotha10
created: 12.04.2021 20:05:43
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

    int ans = 0;

    rep(i, 0, n - 1, 1)
    {
        if (arr[i] == 1 || arr[i] == 3) ans++;
    }

    cout << ans << endl;
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
