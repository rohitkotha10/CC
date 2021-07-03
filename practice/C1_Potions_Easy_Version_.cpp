/*
author:  rohitkotha10
created: 03.07.2021 17:33:18
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

signed main()
{
    IOS;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    set<pair<int, int>> negs;
    int ans = 0;
    int sum = 0;
    int extra = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] < 0)
            negs.emplace(arr[i], i);
        while (extra + sum < 0 && negs.size() > 0)
        {
            extra -= negs.begin()->first;
            //cout << extra << endl;
            negs.erase(negs.begin());
            ans--;
        }
        if (extra + sum < 0)
        {
            cout << ans << endl;
            return 0;
        }
        else
            ans++;
    }
    cout << ans << endl;
}
