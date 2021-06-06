/*
author:  rohitkotha10
created: 04.06.2021 20:05:27
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    vector<int> arr{s1, s2, s3, s4};

    sort(arr.begin(), arr.end());
    if ((s1 == arr[0] && s2 == arr[1]) ||
        (s1 == arr[1] && s2 == arr[0]) ||
        (s1 == arr[2] && s2 == arr[3]) ||
        (s1 == arr[3] && s2 == arr[2]))
        cout << "NO" << endl;

    else
        cout << "YES" << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
