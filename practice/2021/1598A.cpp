/*
author:  rohitkotha10
created: 03.01.2022 20:13:00
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
    vector<char> arr1(n);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    vector<char> arr2(n);
    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    for (int i = 1; i < n; i++)
    {
        if (!(arr1[i] == '0' || arr2[i] == '0'))
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
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
