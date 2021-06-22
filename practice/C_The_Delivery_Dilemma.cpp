/*
author:  rohitkotha10
created: 22.06.2021 21:00:41
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool compfir(const pair<int, int> &a, const pair<int, int> &b) { return a.first < b.first; };
bool compsec(const pair<int, int> &a, const pair<int, int> &b) { return a.second < b.second; };

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

    int delivery = 0;

    vector<pair<int, int>> arr;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
            delivery = max(delivery, a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > delivery)
            arr.emplace_back(a[i], b[i]);
    }

    if (arr.size() == 0)
    {
        cout << delivery << endl;
        return;
    }

    sort(arr.rbegin(), arr.rend(), compfir);

    // for (auto i : arr)
    //     cout << i.first << ' ';
    // cout << endl;
    // for (auto i : arr)
    //     cout << i.second << ' ';
    // cout << endl;

    int walk = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        walk += arr[i].second;
        if (walk > arr[i].first)
        {
            walk -= arr[i].second;
            delivery = arr[i].first;
            break;
        }
    }
    cout << max(walk, delivery) << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
