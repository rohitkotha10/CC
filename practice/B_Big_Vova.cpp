/*
author:  rohitkotha10
created: 20.05.2021 16:30:22
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

int testnum = 0;
int testflag = 0;

void print(const vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;
};

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    sort(arr.rbegin(), arr.rend());
    vector<bool> used(n, 0);
    used[0] = 1;

    vector<int> sol;
    sol.push_back(arr[0]);
    int cur = arr[0];

    rep(j, 1, n - 1, 1)
    {
        int best = -1;
        int ind = -1;
        rep(i, 0, n - 1, 1)
        {
            int val = __gcd(arr[i], cur);
            if (val > best && used[i] == 0)
            {
                best = val;
                ind = i;
                //cout << val << ' ' << cur << endl;
            }
        }
        //cout << j << ' ' << arr[ind] << endl;
        sol.push_back(arr[ind]);
        used[ind] = 1;
        cur = best;
    }
    print(sol);
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        testnum++;
        solve();
    }
}
