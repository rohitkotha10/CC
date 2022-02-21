/*
author:  rohitkotha10
created: 28.06.2021 18:08:25
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

    map<int, int> sol;
    for (int i : arr)
    {
        int need = i / k;
        need++;
        need *= k;
        if (need - i != k)
            sol[need - i]++;
    }

    if (sol.size() == 0)
    {
        cout << 0 << endl;
        return;
    }

    // for (auto i : sol)
        // cout << i.first << ' ';
    // cout << endl;
// 
    // for (auto i : sol)
        // cout << i.second << ' ';
    // cout << endl;

    int indice = 0;
    int max = 0;
    for (auto i : sol)
    {
        indice = i.first;
        max = i.second;
        break;
    }
    for (auto i : sol)
    {
        if (i.second >= max)
        {
            max = i.second;
            indice = i.first;
        }
    }

    int ans = 0;
    ans += indice + 1;
    ans += (max - 1) * k;
    cout << ans << endl;
    // cout << indice << endl << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
