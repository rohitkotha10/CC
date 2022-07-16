/*
author:  rohitkotha10
created: 16.07.2022 10:58:55
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int getL(int n, int mx)
{
    int ans = 0;
    int cur = 1;
    while (cur * mx < n)
    {
        ans++;
        cur *= 2;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int cnt = 1;
    int mx = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            cnt++;
        else
        {
            mx = max(cnt, mx);
            cnt = 1;
        }
    }

    mx = max(cnt, mx);
    int cp = n - mx;
    if (cp == 0)
    {
        cout << 0 << endl;
        return;
    }
    int ans = cp;
    ans += getL(n, mx);
    // cout << cp << ' ' << mx << ' ';
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
