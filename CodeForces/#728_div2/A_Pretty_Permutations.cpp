/*
author:  rohitkotha10
created: 25.06.2021 21:06:00
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 1; i <= n; i++)
        arr[i - 1] = i;
    for (int i = 0; i <= n - 2; i += 2)
        swap(arr[i], arr[i + 1]);
    
    if (n % 2 == 1)
        swap(arr[n - 1], arr[n - 2]);


    for (int i : arr)
        cout << i << ' ';
    cout << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
