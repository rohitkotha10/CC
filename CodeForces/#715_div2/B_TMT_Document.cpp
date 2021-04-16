/*
author:  rohitkotha10
created: 16.04.2021 20:10:33
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

    int t = 0;
    int m = 0;

    vector<int> sol(n/3);
    rep(i, 0, n - 1, 1)
    {
        if(arr[i] == 'T') t++;
        else m++;
    }

    if(m * 3 != n || t * 3 != 2 * n || arr[0] == 'M' || arr[ n - 1] == 'M')
    {
        cout << "NO" << endl;
        return;
    }

    int a = 0;
    rep(i, 0, n - 1, 1)
    {
        if(arr[i] == 'T') a++;
        else a--;
        if(a < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    reverse(arr.begin(), arr.end());

    int b = 0;

    rep(i, 0, n - 1, 1)
    {
        if(arr[i] == 'T') b++;
        else b--;
        if(b < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    
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
