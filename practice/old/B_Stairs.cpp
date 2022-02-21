/*
author:  rohitkotha10
created: 23.04.2021 15:37:01
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

vector<int> pre;

void solve()
{
    int n;
    cin >> n;
    int map = 0;
    rep(i, 0, pre.size() - 1, 1)
    {
        if(pre[i] > n)
        {
            map = i;
            break;
        }
    }
    cout << map << endl;
}
   

signed main()
{
    IOS;
    int sum = 0;
    int k = 1;
    while(sum < 1e18)
    {
        int val = pow(2, k) - 1;
        sum += (val * (val + 1)) / 2;
        pre.push_back(sum);
        k++;
    }
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}