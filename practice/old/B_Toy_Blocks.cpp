/*
author:  rohitkotha10
created: 22.06.2021 08:33:03
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i : arr)
        sum += i;
    sort(arr.begin(), arr.end());

    int ans = 0;

    int needed = sum / (n - 1);
    if (sum % (n - 1) != 0)
        needed++;
    if (needed > arr[n - 1])
    {
        int extra = needed - arr[n - 1];
        ans += extra;
        sum += extra;
        arr[n - 1] = needed;
    }
    int newtot = arr[n - 1] * (n - 1);
    int toadd = newtot - sum;
    ans += toadd;
    arr[0] += toadd;
    sum = newtot;

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
