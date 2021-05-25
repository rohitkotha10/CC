/*
author:  rohitkotha10
created: 25.05.2021 23:26:14
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
//no test
void solve()
{
    string s;
    cin >> s;

    if (s.size() == 2)
    {
        cout << "YES" << endl;
        return;
    }
    vector<int> arr;
    rep(i, 0, s.size() - 1, 1)
        arr.push_back(s[i] - 'A');

    rep(i, 2, arr.size() - 1, 1)
    {
        if (arr[i] != (arr[i - 1] + arr[i - 2]) % 26)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}
