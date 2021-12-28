/*
author:  rohitkotha10
created: 26.04.2021 22:02:28
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
    set<int> arr;
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        arr.insert(val);
    }

    bool flag = 0;
    int k = 1;

    set<int> sol;

    while(k < 1024)
    {
        
        for (int val : arr)
        {
            int num = (val ^ k);
            sol.insert(num);
        }

        if(sol == arr)
        {
            cout << k << endl;
            return;
        }

        k++;
        sol.clear();
    }

    cout << -1 << endl;

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