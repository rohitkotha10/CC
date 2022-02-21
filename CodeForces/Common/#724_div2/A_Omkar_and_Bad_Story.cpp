/*
author:  rohitkotha10
created: 06.06.2021 20:05:20
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
    set<int> s;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        s.insert(val);
        arr.push_back(val);
    }

    sort(arr.begin(), arr.end());

    if (arr[0] < 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    cout << 101 << endl;
    for (int i = 0; i <= 100; i++)
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
