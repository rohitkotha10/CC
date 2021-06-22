/*
author:  rohitkotha10
created: 22.06.2021 19:49:45
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
    int n, k;
    cin >> n >> k;
    vector<int> a(26);
    vector<int> b(26);

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        int ch = (int)c - 97;
        a[ch]++;
    }

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        int ch = (int)c - 97;
        b[ch]++;
    }

    // for(int i : a)
    //     cout << i << ' ';
    // cout << endl;
    // for(int i : b)
    //     cout << i << ' ';
    // cout << endl;

    for (int i = 0; i < 26; i++)
    {
        if (a[i] < b[i])
        {
            //cout << i << -2 << endl;
            cout << "No" << endl;
            return;
        }

        if (a[i] > b[i])
        {
            int extra = a[i] - b[i];
            //cout << i << -1 << endl;
            if (extra % k != 0 || i == 25)
            {
                //cout << i << -3 << endl;
                cout << "No" << endl;
                return;
            }
            else
            {
                a[i + 1] += extra;
                a[i] -= extra;
            }
        }
    }

    cout << "Yes" << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
