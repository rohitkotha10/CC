/*
author:  rohitkotha10
created: 11.06.2021 13:50:39
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
//sol: neal wu, stupid tut

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];

    int sum = 0;
    for (int i : arr)
        sum += i;

    for (int len = n; len >= 1; len--)
    {
        bool flag = 1;
        if (sum % len != 0)
        {
            flag = 0;
            continue;
        }

        int goal = sum / len;
        int i = 0;
        while (i < n)
        {
            int temp = 0;
            while (temp < goal && i < n)
            {
                temp += arr[i];
                i++;
            }
            //cout << i << ' ' << temp << endl;
            if (temp != goal)
            {
                flag = 0;
                break;
            }
            else
                temp = 0;
            //i++;
        }

        if (flag == 1)
        {
            //cout << len << endl;
            cout << n - len << endl;
            return;
        }
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
