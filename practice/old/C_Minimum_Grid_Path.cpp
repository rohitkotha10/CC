/*
author:  rohitkotha10
created: 07.07.2021 22:15:53
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tut
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = n * arr[0] + n * arr[1];

    int odd = 1;
    int even = 1;
    int minodd = arr[1];
    int mineven = arr[0];
    int sum = arr[0] + arr[1];
    for (int i = 2; i < n; i++)
    {
        sum += arr[i];
        if (i % 2 == 0)
        {
            even++;
            mineven = min(mineven, arr[i]);
        }

        else
        {
            odd++;
            minodd = min(minodd, arr[i]);
        }

        int temp = sum + (n - even) * mineven + (n - odd) * minodd;
        ans = min(temp, ans);
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
