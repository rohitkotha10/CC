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
#define all(a) a.begin(), a.end()

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int testnum = 0;
int testflag = 0;

void solve()
{
    int a, b;
    cin >> a >> b;
    string arr;
    cin >> arr;
    int n = arr.length();

    int ans = 0;
    int cnt = 0;
    rep(i, 0, n - 1, 1)
    {
        if (arr[i] == '1')
            cnt++;
    }
    if (cnt * a > b)
    {
        cout << cnt << endl;
        return;
    }
    
    int fir, las;

    rep(i, 0, n - 1, 1)
    {
        if (arr[i] == '1')
    }
    
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