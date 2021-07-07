/*
author:  rohitkotha10
created: 06.07.2021 20:25:14
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tut
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    vector<int> taken(n + 1, 0);
    vector<int> minarr(n + 1, 0);
    vector<int> maxarr(n + 1, 0);

    minarr[1] = arr[1];
    taken[arr[1]] = 1;

    for (int i = 2; i <= n; i++)
    {
        taken[arr[i]] = 1;
        if (arr[i] != arr[i - 1])
            minarr[i] = arr[i];
    }

    maxarr = minarr;

    // for (int i : maxarr)
    //     cout << i << ' ';
    // cout << endl;
    // return;

    vector<int> mintaken;
    for (int i = 1; i <= n; i++)
    {
        if (taken[i] == 0)
            mintaken.push_back(i);
    }
    int ind = 0;
    for (int i = 1; i <= n; i++)
    {
        if (minarr[i] == 0)
        {
            minarr[i] = mintaken[ind];
            ind++;
        }
    }

    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        if (taken[i] == 0)
            s.insert(i);
    }

    int temp = -1;
    for (int i = 1; i <= n; i++)
    {
        if (maxarr[i] == 0)
        {
            auto it = lower_bound(s.begin(), s.end(), temp);
            it--;
            maxarr[i] = *it;
            s.erase(it);
        }
        else
            temp = maxarr[i];
    }

    for (int i = 1; i <= n; i++)
        cout << minarr[i] << ' ';
    cout << endl;
    for (int i = 1; i <= n; i++)
        cout << maxarr[i] << ' ';
    cout << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
