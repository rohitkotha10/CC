/*
author:  rohitkotha10
created: 25.06.2021 08:28:19
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    set<int> s;
    for (int i : arr)
        s.insert(i);

    int elems = s.size();
    if (elems <= k)
    {
        cout << 1 << endl;
        return;
    }
    elems--;

    if (k == 1)
    {
        cout << (arr[0] == arr[n - 1] ? 1 : -1) << endl;
        return;
    }
    int ans = elems / (k - 1);
    if (elems % (k - 1) != 0)
        ans++;
    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
