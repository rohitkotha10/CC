/*
author:  rohitkotha10
created: 03.07.2021 16:36:33
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//map is faster than multiset(O(n)) count
void solve()
{
    int n;
    cin >> n;
    map<pair<int, int>, int> sol;
    int d = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        if (s == 'D')
            d++;
        else
            k++;
        pair<int, int> rat;

        int fac = __gcd(d, k);
        rat = make_pair(d / fac, k / fac);
        sol[rat]++;
        cout << sol[rat] << ' ';
    }
    cout << '\n';
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
