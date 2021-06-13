/*
author:  rohitkotha10
created: 13.06.2021 21:43:08
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];

    if (n == 1)
    {
        cout << arr[0] << endl;
        return;
    }

    int have = 0;
    rep(i, 1, n - 1, 1)
    {
        have += abs(arr[i] - arr[i - 1]);
    }

    have += arr[0] + arr[n - 1];

    int sub = 0;
    if (arr[0] > arr[1])
    {
        sub += arr[0] - arr[1];
        arr[0] = arr[1];
    }

    rep(i, 1, n - 2, 1)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            int tolevel = max(arr[i - 1], arr[i + 1]);
            sub += arr[i] - tolevel;
            arr[i] = tolevel;
        }
    }

    if (arr[n - 1] > arr[n - 2])
    {
        sub += arr[n - 1] - arr[n - 2];
        arr[n - 1] = arr[n - 2];
    }

    cout << have - sub << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
