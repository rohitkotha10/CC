/*
author:  rohitkotha10
created: 29.12.2021 21:43:03
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
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> sums;
    for (int i = 0; i < n / 2; i++)
    {
        sums.push_back(arr[i] + arr[n - i - 1]);
    }
    if (n % 2 == 1)
    sums.push_back(arr[n / 2] * 2);
    for (int i : sums)
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
