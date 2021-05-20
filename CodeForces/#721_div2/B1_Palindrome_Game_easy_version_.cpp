/*
author:  rohitkotha10
created: 20.05.2021 20:13:12
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

bool is_pal(string s)
{
    string p = s;
    reverse(p.begin(), p.end());
    if (p == s)
        return true;
    return false;
}

void solve()
{
    int n;
    cin >> n;
    string arr;
    cin >> arr;

    int cnt = 0;
    rep(i, 0, n - 1, 1)
    {
        if (arr[i] == '0')
            cnt++;
    }

    if (cnt % 2 == 1 && cnt != 1)
        cout << "ALICE" << endl;
    else if (cnt == 0)
        cout << "DRAW" << endl;
    else
        cout << "BOB" << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
