/*
author:  rohitkotha10
created: 04.06.2021 20:48:04
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

    char cur = arr[0];
    
    if (cur == '1')
        cur = '0';
    else if (cur == '0')
        cur = '1';
    vector<int> s;

    int a = 1;
    int extra = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == cur || cur == '?' || arr[i] == '?')
        {
            a++;
            if (cur == '?')
                cur = arr[i];
        }
        else
        {
            s.push_back(a);
            //insert the previous size;
            a = 1;
            cur = arr[i];
            if (arr[i - 1] == '?')
            {
                a++;
                extra++;
                cout << i << endl;
            } //if ? behind, then have increment size, but decrease one from ans, for ?;
        }

        if (cur == '1')
            cur = '0';
        else if (cur == '0')
            cur = '1';
    }

    s.push_back(a);

    int ans = 0;
    for (int i : s)
        cout << i << ' ';
    cout << endl;

    for (int i : s)
        ans += (i * (i + 1)) / 2;

    cout << ans - extra << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
