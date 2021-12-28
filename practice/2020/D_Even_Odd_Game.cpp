/*
author:  rohitkotha10
created: 22.04.2021 21:35:22
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
    vector<int> arr(n);
    int osum;
    int esum;
    rep(i, 0, n - 1, 1) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int s = 0;
    int turn = 0;
    while(arr.size())
    {
        if(arr.back() % 2 == 0 && turn == 0) s += arr.back();
        else if(arr.back() % 2 == 1 && turn == 1) s -= arr.back();
        turn = 1 - turn;
        arr.pop_back();
    }

    cout << (s > 0 ? "Alice" : s == 0 ? "Tie" : "Bob") << endl;
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