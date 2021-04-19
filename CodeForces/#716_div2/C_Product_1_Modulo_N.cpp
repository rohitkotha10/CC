/*
author:  rohitkotha10
created: 19.04.2021 20:07:44
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//no test case  

void solve()
{
    int n;
    cin >> n;

    vector<int> sol = {0};
    vector<int> check = {0};
    rep(i, 1, n - 1, 1)
    {
        sol.push_back(i);
        check.push_back(1);
    }

    rep(i, 2, n - 1, 1)
    {
        if(n % i == 0)
        {
            rep(k, 1, (n/i) - 1, 1) check[k * i] = 0;
        }
    }
    int cnt = 1;
    int sz = 0;

    rep(i, 1, n - 1, 1)
    {
        if(check[i] == 1)
        {
            cnt = (cnt * sol[i]) % n;
            sz++;
        }
    }

    if(cnt == 1)
    {
        cout << sz << endl;
        rep(i, 1, n - 1, 1)
        {
            if(check[i] == 1) cout << sol[i] << ' ';
        } 
    }
    else
    {
        cout << sz - 1 << endl;
        rep(i, 1, n - 2, 1)
        {
            if(check[i] == 1) cout << sol[i] << ' ';
        } 
    }
    cout << endl;

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
