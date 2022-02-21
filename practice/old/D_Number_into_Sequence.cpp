/*
author:  rohitkotha10
created: 29.04.2021 12:19:30
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
    int n;
    cin >> n;
    int ori = n;

    int mult = 0;
    int cur = 0;
    
    while (n % 2 == 0)
    {
        cur = 2;
        mult++;
        n /= 2;
    }

    rep (i, 3, sqrt(n), 2)
    {
        int cnt = 0;
        int temp = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt >= mult)
        {
            mult = cnt;
            cur = i;
        }

        if (i > n)
            break;
    }

    int val = ori / pow(cur, mult - 1);


    if (mult <= 1)
    {
        cout << 1 << endl;
        cout << ori << endl;
        return;
    }
    cout << mult << endl;
    rep(i, 1, mult - 1, 1)
        cout << cur << ' ';
    cout << val << endl;
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
