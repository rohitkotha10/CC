/*
author:  rohitkotha10
created: 16.04.2021 19:37:15
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
    string s;
    cin >> s;
    int n = s.length();

    vector<int> arr;

    rep(i, 0, n - 1, 1)
    {
        if(s[i] == 'R') arr.push_back(i);
    }

    if(arr.size() == 0)
    {
        if(s == "R") cout << 1 << endl;
        else cout << n + 1 << endl;
        return;
    }

    int ans = n - arr[arr.size() - 1];
    ans = max(arr[0] + 1, ans);
    rep(i, 1, arr.size() - 1, 1)
    {
        ans = max(ans, arr[i] - arr[i - 1]);
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