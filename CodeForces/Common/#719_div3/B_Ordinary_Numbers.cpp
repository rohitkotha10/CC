/*
author:  rohitkotha10
created: 03.05.2021 02:18:21
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int testnum = 0;
int testflag = 0;

int digN(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n /= 10;
        cnt++;
    }

    return cnt;
};

void solve()
{
    int n;
    cin >> n;
    int dig = digN(n);
    int cnt = (dig - 1) * 9;
    int check = (pow(10, dig) - 1) / 9;
    cnt += n / check;
    cout << cnt << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        testnum++;
        solve();
    }
}
