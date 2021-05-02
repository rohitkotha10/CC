/*
author:  rohitkotha10
created: 02.05.2021 20:06:13
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
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    sort(arr.rbegin(), arr.rend());

    int sum = 0;

    rep (i, 0, n - 2, 1)
    {
        sum += arr[i];
        if (sum == x)
        {
            sum -= arr[i];
            swap (arr[i], arr[i + 1]);
            sum += arr[i];
        }
        if (sum > x)
            break;   
    }

    sum = 0;

    rep (i, 0, n - 1, 1)
    {
        sum += arr[i];
        if (sum == x)
        {
            cout << "NO" << endl;
            return;
        }
        if (sum > x)
            break; 
    }

    cout << "YES" << endl;
    rep (i, 0, n - 1, 1)
        cout << arr[i] << ' ';
    cout << endl;
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
