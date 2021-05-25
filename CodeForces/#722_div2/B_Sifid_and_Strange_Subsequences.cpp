/*
author:  rohitkotha10
created: 24.05.2021 20:39:19
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

    int flag = 0;
    int cnt = 0;

    rep(i, 0, n - 1, 1)
    {
        if (arr[i] > 0)
            cnt++;
        if (arr[i] == 0)
            flag++;
    }

    if (cnt == 0)
    {
        cout << n << endl;
        return;
    }

    sort(arr.begin(), arr.end());

    if (arr[0] > 0)
    {
        cout << 1 << endl;
        return;
    }

    if (flag >= 2)
    {
        cout << n - cnt << endl;
        return;
    }

    int minpos = 0;
    rep(i, 0, n - 1, 1)
    {
        if (arr[i] >= 0)
        {
            if (arr[i] == 0)
                minpos = arr[i + 1];
            else
                minpos = arr[i];
            break;
        }
    }

    int pair_diff = arr[1] - arr[0];
    rep(i, 0, n - 2, 1)
    {
        pair_diff = min(arr[i + 1] - arr[i], pair_diff);
        if (arr[i + 1] > 0)
            break;
    }

    if (pair_diff < minpos)
        cout << n - cnt << endl;
    else
        cout << n - cnt + 1 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
