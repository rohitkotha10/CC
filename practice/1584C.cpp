/*
author:  rohitkotha10
created: 20.01.2022 08:18:49
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
    vector<int> aarr(202, 0);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        temp += 101;
        aarr[temp]++;
    }

    vector<int> barr(202, 0);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        temp += 101;
        barr[temp]++;
    }

    for (int i = 1; i <= 201; i++)
    {
        if (barr[i] == 0)
            continue;
        if (barr[i] > aarr[i] + aarr[i - 1])
        {
            // cout << i << ' ';
            cout << "NO" << endl;
            return;
        }
        int sub1 = min(barr[i], aarr[i - 1]);
        barr[i] -= sub1;
        aarr[i - 1] -= sub1;
        int sub2 = min(barr[i], aarr[i]);
        barr[i] -= sub2;
        aarr[i] -= sub2;
        if (barr[i] != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
