/*
author:  rohitkotha10
created: 28.04.2021 19:45:46
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

    int prip = 0;
    int pric = 0;
    int sum = 0;

    rep(i, 1, n - 1, 1)
    {
        prip += arr[i - 1];
        pric = arr[i];
        if (pric * 100 > k * prip)
        {
            int pripnew = double((pric * 100) / k);
            if ((pric * 100) % k != 0)
                pripnew++;
            sum += pripnew - prip;
            prip = pripnew;
        }
    }

    cout << sum << endl;
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
