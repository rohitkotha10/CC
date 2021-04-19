/*
author:  rohitkotha10
created: 16.04.2021 19:09:00
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
    
    if((k % 2 == 1 && n % 2 == 0) || (k % 2 == 0 && n % 2 == 1))
    {
        cout << "NO" << endl;
        return;
    }

    (k * k > n) ? cout << "NO" << endl : cout << "YES" << endl;

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