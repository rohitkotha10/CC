/*
author:  rohitkotha10
created: 26.04.2021 19:00:46
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
    int n, r;
    cin >> n >> r;

    if(n <= r)
        cout << ((n * (n - 1)) / 2) + 1 << endl;
    else 
        cout << (r * (r + 1)) / 2 << endl;
}
   

signed main()
{
    IOS;
    int sum = 0;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}