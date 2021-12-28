/*
author:  rohitkotha10
created: 21.04.2021 01:05:12
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

    if(n % 4 == 0)
    {
        cout << n / 4 << ' ' << n / 4 << ' ' << n / 2 << endl;
    }

    else if(n % 2 == 0)
    {
        cout << (n / 2) - 1 << ' ' << (n / 2) - 1 << ' ' << 2 << endl;
    }

    else cout << 1 << ' ' << (n - 1) / 2 << ' ' << (n - 1) / 2 << endl;

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