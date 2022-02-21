/*
author:  rohitkotha10
created: 23.04.2021 11:51:37
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
    string arr;
    cin >> arr;

    int cnt = 0;
    
    rep(i, 1, n - 1, 1)
    {
        if(arr[i] == arr[i - 1])
        {
            cnt++;
            i++;
            while((arr[i] != arr[i - 1]) && i < n) i++;
        }
    }

    cout << cnt << endl;

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