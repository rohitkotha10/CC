/*
author:  rohitkotha10
created: 19.01.2022 22:40:17
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

    int mx = max_element(arr.begin(), arr.end()) - arr.begin();
    int temp = arr[n - 1];
    if (arr[n - 1] == arr[mx])
    {
        cout << 0 << endl;
        return;
    }
    int cnt = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == arr[mx])
            break;

        if (arr[i] > temp)
        {
            temp = arr[i];
            cnt++;
        }
    }

    cout << cnt << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
