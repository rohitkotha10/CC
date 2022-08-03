/*
author:  rohitkotha10
created: 24.07.2022 11:19:52
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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    string s(m, 'B');
    for (int i = 0; i < n; i++)
    {
        if (s[arr[i] - 1] == 'A')
            s[m - arr[i]] = 'A';
        else if (s[m - arr[i]] == 'A')
            s[arr[i] - 1] = 'A';
        else
            s[min(arr[i] - 1, m - arr[i])] = 'A';
    }
    cout << s << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
