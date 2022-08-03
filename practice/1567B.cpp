/*
author:  rohitkotha10
created: 24.07.2022 12:13:51
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

vector<int> precomp;

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = precomp[a];
    ans ^= b;
    cout << (ans == 0 ? a : ans == a ? a + 2
                                     : a + 1)
         << endl;
}

signed main()
{

    int ans = 0;
    precomp.push_back(ans);
    for (int i = 0; i < 3e5; i++)
    {
        ans ^= i;
        precomp.push_back(ans);
    }
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
