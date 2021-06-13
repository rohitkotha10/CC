/*
author:  rohitkotha10
created: 06.06.2021 19:32:48
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
    string arr;
    cin >> arr;
    int n = arr.size();

    vector<int> sizes;
    vector<int> extras;

    int i = 0;
    char cur = arr[i];

    int extra_start = 0;
    if (cur == '?')
    {
        rep(j, 0, n - 1, 1)
        {
            if (arr[j] != '?')
            {
                extra_start = j;
                cur = arr[j];
                i = j;
                break;
            }
        }

        if (cur == '?')
        {
            cout << (n * (n + 1)) / 2 << endl;
            return;
        }
    }


    int temp = extra_start;
    int extra = 0;
    while (i < n)
    {
        if (arr[i] == cur || arr[i] == '?')
        {
            temp++;

            if (arr[i] != '?')
            {
                extra = 0;
            }
            else
            {
                extra++;
            }


            if (cur == '0')
                cur = '1';
            else
                cur = '0';
        }
        else
        {
            //cout << i + 1 << ' ' << temp << ' ' << extra << endl;
            sizes.push_back(temp);
            extras.push_back(extra);
            temp = 1 + extra;
            extra = 0;
            cur = arr[i];
            if (cur == '0')
                cur = '1';
            else
                cur = '0';
        }

        i++;
    }

    sizes.push_back(temp);

    int ans = 0;
    int sub = 0;

    for (int i : extras)
        sub += (i * (i + 1)) / 2;       
    for (int i : sizes)
        ans += (i * (i + 1)) / 2;

    cout << ans - sub << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
