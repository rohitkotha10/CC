/*
author:  rohitkotha10
created: 16.07.2022 09:52:40
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int getL(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n /= 2;
        ans++;
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
    int ans = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        if (arr[i] <= arr[i - 1])
        {
            if (arr[i] == 0)
            {
                cout << -1 << endl;
                return;
            }
            int temp = getL(arr[i - 1] / arr[i]);
            // cout << i << ' ' << temp << endl;
            ans += temp;
            arr[i - 1] = arr[i - 1] / pow(2, temp);
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
