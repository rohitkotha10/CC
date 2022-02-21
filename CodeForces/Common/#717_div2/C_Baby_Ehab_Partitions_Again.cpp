/*
author:  rohitkotha10
created: 21.04.2021 20:38:36
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//no test cases

struct Token { int map, val; };
void solve()
{
    int n;
    cin >> n;
    list<Token> arr(n);
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        arr.push_back(Token{i + 1, val});
    }

    sort(arr.begin(), arr.end());
    for(auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << it->map << ' ';
    }



}

signed main()
{
    IOS;
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}
