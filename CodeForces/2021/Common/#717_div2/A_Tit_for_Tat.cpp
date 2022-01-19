/*
author:  rohitkotha10
created: 21.04.2021 19:06:05
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    rep(i, 0, n - 1, 1)
    {
        if(arr[i] > 0)
        {
            int m = min(arr[i], k);
            arr[i] -= m;
            arr[n - 1] += m;
            k -= m;
            if(k == 0) break;
        }
    }
    rep(j, 0, n - 1, 1) cout << arr[j] << ' ';
    cout << endl;

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
