/*
author:  rohitkotha10
created: 25.06.2021 20:10:07
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
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int end = -1;
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < x)
        {
            end = i;
            break;
        }
        else
            cnt++;
    }

    if (end == -1)
    {
        cout << cnt << endl;
        return;
    }

    int temp = 1;
    for (int i = end; i >= 0; i--)
    {
        if (arr[i] * temp >= x)
        {
            cnt++;
            temp = 1;
        }
        else
            temp++;
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
