/*
author:  rohitkotha10
created: 28.09.2021 21:23:04
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    set<pair<int, int>> sol;
    for (int i = 0; i < n; i++)
        sol.emplace(make_pair(arr[i], i + 1));

    vector<pair<int, int>> answers;
    while (sol.size() > 1)
    {
        auto start = sol.begin();
        auto last = sol.end();
        last--;

        if (start->first == 0)
        {
            sol.erase(start);
            continue;
        }

        answers.emplace_back(start->second, last->second);

        sol.emplace(make_pair((start->first) - 1, start->second));
        sol.emplace(make_pair((last->first) - 1, last->second));

        sol.erase(start);
        sol.erase(last);
    }

    cout << (int)answers.size() << endl;
    for (auto i : answers)
    {
        cout << i.first << ' ' << i.second << endl;
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
