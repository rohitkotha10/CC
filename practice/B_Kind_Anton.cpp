/*
author:  rohitkotha10
created: 15.04.2021 18:19:02
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
    vector<int> a(n);
    vector<int> b(n);
    rep(i, 0, n - 1, 1) cin >> a[i];
    rep(i, 0, n - 1, 1) cin >> b[i];


    bool neg = 0;
    bool pos = 0;
    if(a[0] != b[0])
    {
        cout << "NO\n";
        return;      
    }

    if(a[0] == 1) pos = 1;
    else if(a[0] == -1)  neg = 1;


    bool flag = 1;
    rep(i, 0, n - 1, 1)
    {
        

        if(b[i] > a[i] && pos == 0)
        {
            flag = 0;
            break;
        }

        if(b[i] < a[i] && neg == 0)
        {
            flag = 0;
            break;
        }

        if(a[i] == 1) pos = 1;
        else if(a[i] == -1)  neg = 1;
    }

    flag ? cout << "YES" << endl : cout << "NO" << endl;

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