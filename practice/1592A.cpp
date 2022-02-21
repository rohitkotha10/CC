/*
author:  rohitkotha10
created: 03.01.2022 20:29:28
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n, h;
    cin >> n >> h;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.rbegin(), arr.rend());
    int a = arr[0];
    int b = arr[1];
    // cout << a << ' ' << b << endl;
    if (a >= h)
        cout << 1 << endl;
    else
    {
        int temp = a + b;
        int div = h / temp;
        int sub = h - (temp * div);
        int ans =  2 * div;
        if (sub == 0)
            cout << ans << endl;
        else
            cout << (sub <= a ? ans + 1 : ans + 2) << endl;
            
    }
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
