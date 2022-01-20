/*
author:  rohitkotha10
created: 19.01.2022 22:17:59
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
    string arr;
    cin >> arr;

    int n = arr.length();
    int f = 0, o = 0, flag = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (flag == 0 && arr[i] == '5')
        {
            f = i;
            flag++;
        }

        if (flag == 1 && (arr[i] == '2' || arr[i] == '7'))
        {
            o = i;
            flag++;
            break;
        }
    }
    int ans = 50;

    if (flag == 2)
        ans = n - o - 2;

    f = 0, o = 0, flag = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (flag == 0 && arr[i] == '0')
        {
            f = i;
            flag++;
            continue;
        }

        if (flag == 1 && (arr[i] == '5' || arr[i] == '0'))
        {
            o = i;
            flag++;
            break;
        }
    }

    if (flag == 2)
        ans = min(n - o - 2, ans);

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
