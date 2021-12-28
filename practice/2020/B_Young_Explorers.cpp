/*
author:  rohitkotha10
created: 26.04.2021 22:29:52
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int group = 0;
    int req = 0;
    int cur = 0;
    int i = 0;
    while (i < n)
    {
        cur++;
        req = max(arr[i], req);
        if (cur >= req)
        {
            group++;
            cur = 0;
            req = 0;
        }
        i++;
    }

    cout << group << endl;
    

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