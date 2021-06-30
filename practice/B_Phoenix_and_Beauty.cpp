/*
author:  rohitkotha10
created: 30.06.2021 09:49:50
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    set<int> nos;
    for (int i : arr)
        nos.insert(i);
    if (nos.size() > k)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> pattern;
    for (int i : nos)
        pattern.push_back(i);
    if (pattern.size() < k)
    {
        int add = k - pattern.size();
        for (int i = 0; i < add; i++)
            pattern.push_back(pattern[0]);
    }

    // for (int i : pattern)
    //     cout << i << ' ';
    // cout << endl;
    // return;

    cout << n * k << endl;
    int cnt = 0;
    while (cnt < n)
    {
        cnt++;
        for (int i : pattern)
            cout << i << ' ';
    }
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
