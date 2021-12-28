/*
author:  rohitkotha10
created: 19.04.2021 19.04.2021 15:55:17
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
    int aold = a;
    int cnt = 0;
    while(a > 0)
    {
        cnt++;
        a /= 10;
    }

    if(aold == (int)pow(10,cnt) - 1) cnt++;

    return cnt - 1;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << a * digN(b) << endl;

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