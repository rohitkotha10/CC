/*
author:  rohitkotha10
created: 18.07.2022 09:01:32
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int count0(string s)
{
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '0')
            ans++;
    return ans;
}

void solve()
{

    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = 0;
            if (arr[i][j] == '0')
                temp++;
            if (arr[j][n - 1 - i] == '0')
                temp++;
            if (arr[n - 1 - i][n - 1 - j] == '0')
                temp++;
            if (arr[n - 1 - j][i] == '0')
                temp++;
            temp = min(temp, 4 - temp);
            ans += temp;
        }
    }
    ans /= 4;
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
