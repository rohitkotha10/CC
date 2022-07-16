/*
author:  rohitkotha10
created: 16.07.2022 14:50:26
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
    set<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.insert(temp);
    }
    int cnt = arr.size();
    for (int i = 1; i <= n; i++)
    {
        if (i <= cnt)
            cout << cnt << ' ';
        else
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
