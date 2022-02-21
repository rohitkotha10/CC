/*
author:  rohitkotha10
created: 20.01.2022 09:22:04
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
    int a = count(arr.begin(), arr.end(), 0);
    int b = count(arr.begin(), arr.end(), 1);
    if (b == 0)
        cout << 0 << endl;
    else if (a == 0)
        cout << b << endl;
    else
        cout << (int)(b * (pow(2, a))) << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
