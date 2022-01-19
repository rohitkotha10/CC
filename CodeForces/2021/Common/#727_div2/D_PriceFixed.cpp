/*
author:  rohitkotha10
created: 21.06.2021 10:08:32
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//no test

bool compfir(const pair<int, int> &a, const pair<int, int> &b) { return a.first < b.first; };
bool compsec(const pair<int, int> &a, const pair<int, int> &b) { return a.second < b.second; };

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;

    sort(arr.rbegin(), arr.rend(), compfir);
    sort(arr.rbegin(), arr.rend(), compsec);

    int total = 0;
    // for (pair<int, int> i : arr)
    //     cout << i.first << ' ' << i.second << endl;
    for (pair<int, int> i : arr)
        total += i.first;
    int ans = 0;
    int items = 0;
    int start = 0;
    int last = n - 1;
    while (items < total)
    {
        int needed = arr[last].second;
        if (items < needed)
        {
            int &take = arr[start].first;
            if (take <= needed - items)
            {
                ans += 2 * take;
                items += take;
                take = 0;
                start++;
            }

            else
            {
                ans += 2 * (needed - items);
                take -= needed - items;
                items = needed;
            }
        }

        else
        {
            ans += arr[last].first;
            items += arr[last].first;
            arr[last].first = 0;
            last--;
        }
    }

    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}
