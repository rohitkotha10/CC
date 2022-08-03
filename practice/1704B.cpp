/*
author:  rohitkotha10
created: 02.08.2022 14:58:28
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool inter(int &l1, int &r1, int l2, int r2)
{

    l1 = max(l1, l2);
    r1 = min(r1, r2);
    if (l1 <= r1)
        return true;
    l1 = l2;
    r1 = r2;
    return false;
}
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int curl = arr[0] - x;
    int curr = arr[0] + x;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        int l = arr[i] - x;
        int r = arr[i] + x;
        if (!inter(curl, curr, l, r))
            cnt++;
    }
    cout << cnt << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
