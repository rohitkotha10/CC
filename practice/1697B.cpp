/*
author:  rohitkotha10
created: 14.07.2022 21:22:20
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
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.rbegin(), arr.rend());
    // for (int i : arr)
    //     cout << i << ' ';
    // cout << endl;
    vector<int> psums(n + 1, 0);
    for (int i = 0; i < n; i++)
        psums[i + 1] = arr[i] + psums[i];
    vector<int> ans;
    for (int i = 0; i < q; i++)
    {
        int temp = 0;
        int x, y;
        cin >> x >> y;
        ans.push_back(psums[x] - psums[x - y]);
    }
    for (int i : ans)
        cout << i << endl;
}
