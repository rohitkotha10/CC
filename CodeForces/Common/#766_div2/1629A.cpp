/*
author:  rohitkotha10
created: 22.01.2022 23:31:40
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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i].first;
    for (int i = 0; i < n; i++)
        cin >> arr[i].second;
    sort(arr.begin(), arr.end(), compfir);

    for (int i = 0; i < n; i++)
    {
        if (arr[i].first > k)
            break;
        k += arr[i].second;
    }

    cout << k << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
