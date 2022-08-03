/*
author:  rohitkotha10
created: 02.08.2022 14:30:50
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

signed main()
{
    IOS;
    int n, m;
    cin >> n >> m;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    vector<int> ffalls(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        ffalls[i] = ffalls[i - 1] + max(0LL, arr[i - 1] - arr[i]);
    }

    vector<int> bfalls(n + 1, 0);
    for (int i = n - 1; i >= 1; i--)
    {
        bfalls[i] = bfalls[i + 1] + max(0LL, arr[i + 1] - arr[i]);
    }

    // for (int i : arr)
    //     cout << i << ' ';
    // cout << endl;
    // for (int i : ffalls)
    //     cout << i << ' ';
    // cout << endl;
    // for (int i : bfalls)
    //     cout << i << ' ';
    // cout << endl;

    for (int i = 0; i < m; i++)
    {
        int a1, a2;
        cin >> a1 >> a2;
        if (a1 > a2)
            cout << bfalls[a2] - bfalls[a1] << endl;
        else
            cout << ffalls[a2] - ffalls[a1] << endl;
    }
    return 0;
}
