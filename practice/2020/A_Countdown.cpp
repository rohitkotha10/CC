/*
author:  rohitkotha10
created: 28.09.2021 19:47:18
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
    vector<char> arr(n);
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != '0')
            cnt++;
        int temp = arr[i] - '0';
        ans += temp;
    }

    if (arr.back() != '0')
        cnt--;
    cout << ans + cnt << endl;
    
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
