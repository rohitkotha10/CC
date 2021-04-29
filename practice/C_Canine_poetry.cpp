/*
author:  rohitkotha10
created: 28.04.2021 21:04:37
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
    string arr;
    cin >> arr;

    const int n = arr.length();
    int ans = 0;

    rep(i, 0, n - 1, 1)
    {
        bool bad = false;
        if(i - 1 >= 0 && arr[i] == arr[i - 1])
            bad = true;
        if(i - 2 >= 0 && arr[i] == arr[i - 2])
            bad = true;
        if (bad == true)
        {
            ans++;
            arr[i] = '.';
        }
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
