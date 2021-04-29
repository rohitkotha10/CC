/*
author:  rohitkotha10
created: 28.04.2021 20:23:14
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
    int n, m;
    cin >> n >> m;
    vector<int> k(n);
    vector<int> c(m);
    rep(i, 0, n - 1, 1) cin >> k[i];
    rep(i, 0, m - 1, 1) cin >> c[i];

    int sum = 0;

    sort(k.rbegin(), k.rend());

    rep(i, 0, n - 1, 1)
    {
        if (k[i] - 1 >= i && i < m)
            sum += c[i];
        else
            sum += c[k[i] - 1];  

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
