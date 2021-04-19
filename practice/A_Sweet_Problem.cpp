/*
author:  rohitkotha10
created: 19.04.2021 16:29:02
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol : tutorial
void solve()
{
    int r, g, b;
    cin >> r >> g >> b;
    vector<int> v {r, g, b};
    sort(v.begin(), v.end());

    int cnt = 0;
    if(v[2] - v[1] >= v[0]) cout << (v[0] + v[1]) << endl;
    else cout << (r + g + b) / 2 << endl;
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