/*
author:  rohitkotha10
created: 19.06.2021 17:55:15
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
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];
    int sum = 0;
    rep(i, 0, n - 1, 1)
        sum += arr[i];
    float avg = (float)sum / (float)n;
    //cout << avg << ' ';
    if (avg == 1)
        cout << 0 << endl;
    else if (avg < 1)
        cout << 1 << endl;
    else
        cout << sum - n << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
