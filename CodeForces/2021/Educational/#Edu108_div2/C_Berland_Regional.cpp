/*
author:  rohitkotha10
created: 29.04.2021 20:27:45
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: neal wu
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n + 1);
    vector<int> temp(n);

    rep(i, 0, n - 1, 1) cin >> temp[i];
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        arr[temp[i]].push_back(val);
    }

    vector<int> skill(n + 1, 0);
    rep(mas, 1, n, 1)
    {
        sort(arr[mas].begin(), arr[mas].end());
        int len = arr[mas].size();
        vector<int> prefix_sum(n + 1, 0);
        rep(i, 0, len - 1, 1)
        {
            prefix_sum[i + 1] = prefix_sum[i] + arr[mas][i];
        }
        rep(k, 1, len, 1)
            skill[k] += prefix_sum[len] - prefix_sum[len % k];
    }
    rep(k, 1, n, 1)
        cout << skill[k] << ' ';
    cout << endl;
}

signed main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
