/*
author:  rohitkotha10
created: 21.05.2021 18:33:51
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
    string s;
    cin >> s;

    int res = 0;
    int init = 0;
    vector<int> arr;
    int temp = 0;
    bool ok = 1;
    rep(i, 0, s.size() - 1, 1)
    {
        if (s[i] == '+')
            temp++;
        else
            temp--;

        if (temp < 0)
        {
            arr.push_back(i + 1);
            temp = 0;
            ok = 0;
        }
    }

    arr.push_back(s.size());

    for (int i : arr)
        res += i;
    cout << res << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
