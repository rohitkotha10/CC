/*
author:  rohitkotha10
created: 23.04.2021 20:05:35
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int digN(int a)
{
    int cnt = 0;
    while(a > 0)
    {
        cnt += a % 10;
        a /= 10;
    }
    return cnt;
}

void solve()
{
    int n;
    cin >> n;
    if(n % 2050 == 0)
    {
        cout << digN(n / 2050) << endl;
    }
    else
    {
        cout << -1 << endl;
        return;
    }

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
