/*
author:  rohitkotha10
created: 15.07.2022 15:29:41
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
    if (n == 1)
        cout << -1 << endl;
    else
    {
        vector<int> ans(n);
        int cur = 0;
        while (cur < n)
        {
            if (arr[cur] == cur + 1)
            {
                if (cur == n - 1)
                {
                    int temp = ans[cur - 1];
                    ans[cur - 1] = cur + 1;
                    ans[cur] = temp;
                    break;
                }
                ans[cur + 1] = cur + 1;
                ans[cur] = cur + 2;
                cur += 2;
            }
            else
            {
                ans[cur] = cur + 1;
                cur++;
            }
        }

        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
