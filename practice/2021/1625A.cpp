/*
author:  rohitkotha10
created: 18.01.2022 13:23:40
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n, l;
    cin >> n >> l;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> sol(l);
    for (int i = 0; i < l; i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            // cout << bitset<5>(arr[j]) << endl;
            if (arr[j] % 2 == 1)
                ans++;
            arr[j] = arr[j] >> 1;
        }
        if (ans > n / 2)
            sol[i] = 1;
        else
            sol[i] = 0;
        // cout << sol[i] << endl;
    }

    int cnt = 0;
    for (int i = 0; i < l; i++)
        cnt += pow(2, i) * sol[i];
    cout << cnt << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
