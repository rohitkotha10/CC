/*
author:  rohitkotha10
created: 04.06.2021 20:10:23
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

    if (n == 2)
    {
        if (__gcd(arr[0], 2 * arr[1]) > 1 || __gcd(arr[1], 2 * arr[0]) > 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }

    int temp = n - 1;
    int ans = 0;
    vector<int> sol;
    rep(i, 0, n - 1, 1)
    {
        if (arr[i] % 2 == 0)
        {
            ans += temp;
            temp--;
        }

        else
        {
            sol.push_back(arr[i]);
        }
    }

    if ((int)sol.size() <= 1)
    {
        cout << ans << endl;
        return;
    }

    sort(sol.rbegin(), sol.rend());

    // cout << ans << endl;
    // for (int i : sol)
    //     cout << i << ' ';
    // cout << endl;


    n = sol.size();
    rep(i, 0, n - 2, 1)
    {
        rep(j, i + 1, n - 1, 1)
        {
            if (__gcd(sol[i], 2 * sol[j]) > 1)
                ans++;
        }
    }

    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
