/*
author:  rohitkotha10
created: 20.06.2021 12:22:26
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

    int cnt = 0;
    rep(i, 1, n - 1, 1)
        cnt += abs(arr[i] - arr[i - 1]);

    int maxsaver = max(abs(arr[0] - arr[1]), abs(arr[n - 2] - arr[n - 1]));
    rep(i, 1, n - 2, 1)
    {
        int ori = abs(arr[i - 1] - arr[i]) + abs(arr[i] - arr[i + 1]);
        int c1 = abs(arr[i - 1] - arr[i + 1]);
        int change = ori - c1;
        int save = max(change, 0LL);
        maxsaver = max(maxsaver, save);
    }

    //cout << maxsaver << endl;

    cout << cnt - maxsaver << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
