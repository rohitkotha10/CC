/*
author:  rohitkotha10
created: 12.04.2021 21:10:42
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
    int n, q;
    cin >> n >> q;
    list<int> arr;
    
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }; 
    vector<int> que(q);
    rep(i, 0, q - 1, 1) cin >> que[i];

    list<int>::iterator its;
    rep(i, 0, q - 1, 1)
    {
        int cnt = 0;
        for(auto it = arr.begin(); it != arr.end(); it++)
        {
            cnt++;
            if(*it == que[i])
            {
                cout << cnt << ' ';
                arr.push_front(*it);
                arr.erase(it);
                break;
            }
        }
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
