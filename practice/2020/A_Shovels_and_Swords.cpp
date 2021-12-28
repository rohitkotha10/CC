/*
author:  rohitkotha10
created: 14.04.2021 21:02:32
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
    int a, b;
    cin >> a >> b;
    if( (a == 0 || b == 0) || (a == 1 && b == 1) )
    {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;

    if(a > b) swap(a, b); //a is the new min now;
    
    if(b >= 2 * a)
    {
        cout << a << endl;
        return;
    }

    int diff = b - a;
    b = b - (2 * diff);
    a = a - diff;
    cnt += diff;


    if(a % 3 == 2) cnt += 2 * (a / 3) + 1;
    else cnt += 2 * (a / 3);
    cout <<  cnt << endl;
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
