/*
author:  rohitkotha10
created: 23.04.2021 11:14:07
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tutorial
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    multiset<int> sol;
    int prev = 0;
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        if(val == prev) continue;
        arr.push_back(val);
        sol.insert(val);
        prev = val;
    }
    n = arr.size();
    int ans = n;

    rep(i, 0, n - 1, 1)
    {
        int req = sol.count(arr[i]) + 1;
        if(arr[i] == arr.front()) req--;
        if(arr[i] == arr.back()) req--;
        ans = min(ans, req);
    }
    cout << ans << endl;

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