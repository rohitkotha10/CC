/*
author:  rohitkotha10
created: 03.01.2022 19:08:12
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
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    vector<int> shifts(n + 1, 0);
    for (int i = 1; i <= n; i++)
        shifts[i] = arr[i] - i;
    cout << *max_element(shifts.begin(), shifts.end()) << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
