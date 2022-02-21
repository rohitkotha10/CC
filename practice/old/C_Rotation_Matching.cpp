/*
author:  rohitkotha10
created: 29.06.2021 10:38:42
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tut;
signed main()
{
    IOS;
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        a[val] = i;
    }
    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    vector<int> sol(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int cur = a[b[i]] - i; //to shift to get same;
        if (cur < 0)
            cur += n;
        sol[cur]++;
    }

    cout << *max_element(sol.begin(), sol.end()) << endl;
}
