/*
author:  rohitkotha10
created: 23.05.2021 10:34:03
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> arr;
    int ans = 0;

    rep(i, 0, n - 1, 1)
    {
        if (s[i] == '1')
            arr.push_back(i);
    }

    if (arr.size() == 0)
    {
        ans = n;
        ans /= (k + 1);
        if ((n % (k + 1)) != 0)
            ans++;
        cout << ans << endl;
        return;
    }

    int i = 0;
    while (i < arr.size())
    {
        int temp = 0;
        if (i == 0)
        {
            temp = arr[i];
            temp /= (k + 1);
        }

        else
        {
            temp = arr[i] - arr[i - 1] - 1 - k;
            temp /= k + 1;
        }
        ans += temp;
        i++;
    }

    int temp = n - arr.back() - 1;
    temp /= (k + 1);
    ans += temp;

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
