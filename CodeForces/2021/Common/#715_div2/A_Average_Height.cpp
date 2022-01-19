/*
author:  rohitkotha10
created: 16.04.2021 20:05:40
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
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    vector<int> sol;

    rep(i, 0, n - 1, 1)
    {
        if(arr[i] %2 == 1) cout << arr[i] << ' ';
        else sol.push_back(arr[i]);
    }

    if(sol.size() == 0)
    {
        cout << endl;
        return;
    }

    rep(i, 0, sol.size() - 1, 1) cout << sol[i] << ' ';
    cout << endl;


    
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
