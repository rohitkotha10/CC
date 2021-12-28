/*
author:  rohitkotha10
created: 11.05.2021 09:51:22
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
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    q++;
    bool start = 1;

    while (q--)
    {
        if (start == 0)
        {
            start = 0;
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            swap(arr[l], arr[r]);
        }

        start = 0;

        vector<int> change{arr[0]};
        rep(i, 1, n - 1, 1)
            change.push_back(arr[i] - arr[i - 1]);

        vector<int> sol;

        int i = 0;
        while (i < n)
        {
            while (change[i] >= 0 && i < n)
                i++;

            //cout << i << 's' << change[i - 1] << ' ' << arr[i - 1] << endl;
            sol.push_back(arr[i - 1]);
            if (i == n)
                break;

            while (change[i] < 0 && i < n)
                i++;
            //cout << i << 'd' << change[i - 1] << ' ' << arr[i - 1] << endl;
            sol.push_back(arr[i - 1]);
        }
        // print(arr);
        // print(change);
        //print(sol);

        if (sol.size() <= 2)
        {
            cout << sol[0] << endl;
            continue;
        }
        if (sol.size() % 2 == 0)
            sol.pop_back();

        int cur = 0;
        int temp = 0;

        rep(i, 0, sol.size() - 2, 2)
        {
            cur += sol[i] - sol[i + 1];
        }

        //print(sol);

        cur += sol[sol.size() - 1];

        cout << cur << endl;
    }
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
