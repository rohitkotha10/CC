/*
author:  rohitkotha10
created: 29.12.2021 14:56:47
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
    vector<string> arr(n - 2);
    for (int i = 0; i < n - 2; i++)
        cin >> arr[i];
    string ans = arr[0];
    bool flag = 0;

    for (int i = 0; i < n - 3; i++)
    {
        if (arr[i].back() == arr[i + 1].front())
            ans += arr[i + 1].back();
        else
        {
            flag = 1;
            ans += arr[i + 1];
        }
    }

    if (flag == 0)
        ans += arr.back().back();
    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
