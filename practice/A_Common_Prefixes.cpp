/*
author:  rohitkotha10
created: 25.04.2021 09:25:58
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
    string s = "abcdefghijklmnopqrstuvwxyz";
    while(s.length() < 300)
    {
        s += s;
    }
    rep(i, 0, n - 1, 1)
    {
        if(arr[i] == 0) cout << s.substr(i + 1, 2) << endl;
        else if(i == 0) cout << s.substr(0, arr[i]) << endl;
        else cout << s.substr(0, max(arr[i], arr[i - 1])) << endl;
    }
    if(arr[n - 1] == 0) cout << s.substr(n + 1, 2) << endl;
    else cout << s.substr(0, arr[n - 1]) << endl;
}
   

signed main()
{
    IOS;
    int sum = 0;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}



