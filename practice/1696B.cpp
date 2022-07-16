/*
author:  rohitkotha10
created: 14.07.2022 21:50:52
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
// problem with test case 1 0 5 5 fixed
void solve(int t)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            ans = 1;
    }

    if (ans == 0)
    {
        cout << 0 << endl;
        return;
    }

    int cur = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != 0 && arr[i + 1] == 0)
            cur++;
    }
    if (arr[n - 1] != 0)
        cur++;
    if (cur >= 2)
        cout << 2 << endl;
    else
        cout << 1 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}
