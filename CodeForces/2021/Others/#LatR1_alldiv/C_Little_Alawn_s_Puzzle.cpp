/*
author:  rohitkotha10
created: 13.06.2021 21:43:08
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);

    rep(i, 0, n - 1, 1)
            cin >>
        arr1[i];
    rep(i, 0, n - 1, 1)
            cin >>
        arr2[i];
    
    int switches = 0;

    vector<bool> check(n, 0);
    int ans = 1;
    rep(i, 1, switches, 1)
    {
        ans = (ans * 2) % MOD;
    }

    cout << ans << endl;

    
}

    signed main()
    {
        IOS;
        int t = 1;
        cin >> t;
        while (t--)
            solve();
    }
