/*
author:  rohitkotha10
created: 19.06.2021 18:17:55
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
    vector<pair<int, int>> sol;
    sort(arr.begin(), arr.end());
    rep(i, 1, n - 1, 1)
    {
        sol.emplace_back(arr[i] - arr[i - 1], i);
    }

    sort(sol.begin(), sol.end());

    vector<int> minarr;
    rep(i, 0, n - 2, 1)
    {
        if (sol[i].first == sol[0].first)
            minarr.push_back(sol[i].second);
        else
            break;
    }

    sort(minarr.begin(), minarr.end());

    int indice = 0;
    if (minarr.back() == n - 1)
        indice = minarr.size() - 1;
    int first = minarr[indice] - 1;
    int last = minarr[indice];
    if (first != 0 || last != n - 1)
    {
        cout << arr[first] << ' ';
        rep(i, last + 1, n - 1, 1)
                cout
            << arr[i] << ' ';
        rep(i, 0, first - 1, 1)
                cout
            << arr[i] << ' ';
        cout << arr[last] << endl;
        ;
        return;
    }
    cout << arr[first] << ' ';
    rep(i, 0, n - 1, 1)
    {
        if (i == first || i == last)
            continue;
        else
            cout << arr[i] << ' ';
    }

    cout << arr[last] << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
