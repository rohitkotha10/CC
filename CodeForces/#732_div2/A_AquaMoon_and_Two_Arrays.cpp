/*
author:  rohitkotha10
created: 11.07.2021 19:37:16
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int sum = 0;
    for (int i : a)
        sum += i;
    for (int i : b)
        sum -= i;

    if (sum != 0)
    {
        cout << -1 << endl;
        return;
    }

    vector<pair<int, int>> sol;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            continue;
        if (a[i] > b[i])
        {
            int diff = abs(a[i] - b[i]);
            int ind = i + 1;
            for (int j = 0; j < diff; j++)
            {
                while (a[ind] >= b[ind])
                    ind++;
                sol.push_back(make_pair(i + 1, ind + 1));
                a[ind]++;
                a[i]--;
            }
        }
        else
        {
            int diff = abs(a[i] - b[i]);
            int ind = i + 1;
            for (int j = 0; j < diff; j++)
            {
                while (a[ind] <= b[ind])
                    ind++;
                sol.push_back(make_pair(ind + 1, i + 1));
                a[ind]--;
                a[i]++;
            }
        }
    }

    cout << (int)sol.size() << endl;
    for (auto i : sol)
    {
        cout << i.first << ' ' << i.second << endl;
    }

    // for (int i : a)
    //     cout << i << ' ';
    // cout << endl;
    // for (int i : b)
    //     cout << i << ' ';
    // cout << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
