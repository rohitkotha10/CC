/*
author:  rohitkotha10
created: 20.09.2021 20:21:11
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool checker(vector<int> arr)
{
    arr[1] -= arr[0];
    arr[2] -= arr[0];
    arr[0] = 0;
    int check = arr[2] - arr[1];
    if (check > 1)
        return false;
    return true;
}
void solve()
{
    int a, b, c, m;
    cin >> a >> b >> c >> m;

    vector<int> arr{a, b, c};
    sort(arr.begin(), arr.end());

    if (m >= 1)
    {
        //until the max becomes less, keep pairing,
        //if max is change, then pair another letter
        //finally check 0 case
        int diff1 = arr[2] - arr[1];
        int diff2 = arr[1] - arr[0];
        
        
    }

    cout << (checker(arr) ? "YES" : "NO") << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}