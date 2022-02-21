/*
author:  rohitkotha10
created: 11.07.2021 20:17:15
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> arr(2 * n - 1);
    for (int i = 0; i < 2 * n - 1; i++)
        cin >> arr[i];

    string ans;

    for (int j = 0; j < m; j++)
    {
        vector<int> sol(26, 0);
        for (int i = 0; i < 2 * n - 1; i++)
        {
            int cur = arr[i][j];
            sol[cur - 97]++;
        }

        // for (int i : sol)
        //     cout << i << ' ';
        // cout << endl;
        for (int i = 0; i < 26; i++)
        {
            if (sol[i] % 2 == 1)
            {
                char cur = i + 'a';
                ans += cur;
                break;
            }
        }
    }

    cout << ans << endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
