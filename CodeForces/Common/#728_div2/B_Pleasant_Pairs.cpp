/*
author:  rohitkotha10
created: 25.06.2021 21:12:37
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tut, G - 1; (1/1 + 1/2 + 1/3 + ...) is O(logn);
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        int val = arr[i];
        for (int x = val; x <= 2 * n; x += val)
        {
            int j = x - i;
            if (j > 0 && j <= n && i != j && arr[j] == (x / val))
                cnt++;
        }
    }

    cout << cnt / 2 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
