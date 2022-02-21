/*
author:  rohitkotha10
created: 26.04.2021 20:25:10
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
    int n, x;
    cin >> n >> x;
    int odd = 0;
    int even = 0;
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        if(val % 2 == 0)
            even++;
    }

    odd = n - even;
    rep(i, 1, min(x, odd), 2)
    {
        if(x - i <= even)
        {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;

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