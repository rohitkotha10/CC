/*
author:  rohitkotha10
created: 23.04.2021 15:18:19
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int binD(int a)
{
    int cnt = 0;
    while(a > 0)
    {
        a >>= 1;
        cnt++;
    }
    return cnt;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(31, 0);
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        arr[binD(val)]++;
    }
    int cnt = 0;
    rep(i, 0, 30, 1)
    {
        cnt += (arr[i] * (arr[i] - 1)) / 2;
    }
    cout << cnt << endl;
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