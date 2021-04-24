/*
author:  rohitkotha10
created: 22.04.2021 21:35:28
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tutorial
void solve()
{
    int n;
    cin >> n;
    if(n <= 0)
    {
        cout << -n << endl;
        return;
    }

    int pos = 0;
    int k = 0;
    while(true)
    {
        pos = (k * (k + 1)) / 2;
        if(pos >= n) break;
        k++;
    }
    int diff = pos - n;
    if(diff != 1) cout << k << endl;
    else cout << k + 1 << endl;
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