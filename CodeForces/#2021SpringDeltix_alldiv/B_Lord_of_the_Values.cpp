/*
author:  rohitkotha10
created: 30.05.2021 20:23:43
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

struct Token
{
    int type, first, last;
};

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<Token> sol;
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];

    rep(i, 1, n, 2)
    {
        sol.push_back(Token{1, i, i + 1});
        sol.push_back(Token{1, i, i + 1});
        sol.push_back(Token{2, i, i + 1});
        sol.push_back(Token{1, i, i + 1});
        sol.push_back(Token{1, i, i + 1});
        sol.push_back(Token{2, i, i + 1});
    }

    cout << sol.size() << endl;
    for (Token i : sol)
        cout << i.type << ' ' << i.first << ' ' << i.last << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
