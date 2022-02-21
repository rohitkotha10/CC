/*
author:  rohitkotha10
created: 19.04.2021 15:14:46
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
    int n, s, k;
    cin >> n >> s >> k;
    set<int> arr;
    rep(i, 0, k - 1, 1)
    {
        int val;
        cin >> val;
        arr.insert(val);
    }

    int min1 = n, min2 = n;
    if(arr.count(s) == 0)
    {
        cout << 0 << endl;
        return;
    }

    rep(i, 1, s - 1, 1)
    {
        if(arr.count(s - i) == 0)
        {
            min1 = i;
            break;
        }
    }

     rep(i, 1, n - s, 1)
    {
        if(arr.count(s + i) == 0)
        {
            min2 = i;
            break;
        }
    }

    cout << min(min1, min2) << endl;
        
        
    
    

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