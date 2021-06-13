/*
author:  rohitkotha10
created: 08.06.2021 19:14:16
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
    vector<pair<int, int>> arr(n);
    rep(i, 0, n - 1, 1)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());

    vector<int> sums(n + 1);
    rep(i, 1, n, 1)
        sums[i] = sums[i - 1] + arr[i - 1].first;

    vector<bool> check(n, 0);

    int map = 0;

    for (int j = n - 1; j >= 1; j--)
    {
        if (sums[j] < arr[j].first)
        {
            map = j;
            break;
        }
    }
    set<int> sol;
    for (int i = map; i < n; i++)
    {
        sol.insert(arr[i].second);
    }

    cout << sol.size() << endl;
    for (int i : sol)
        cout << i << ' ';
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
