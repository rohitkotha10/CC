/*
author:  rohitkotha10
created: 29.04.2021 11:54:05
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//no test cases
void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << ((n / 2) + 1) * ((n / 2) + 1) << endl;
    else
        cout << ((n + 1) * (n + 3)) / 2 << endl;
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
