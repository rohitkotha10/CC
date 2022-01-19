/*
author:  rohitkotha10
created: 28.09.2021 21:14:21
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
    
    list<int> sol;
    int mn = arr[0];
    sol.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            sol.push_front(arr[i]);
        }

        else
            sol.push_back(arr[i]);
    }

    for (int it : sol)
        cout << it << ' ';
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
