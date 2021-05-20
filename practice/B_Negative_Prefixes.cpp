/*
author:  rohitkotha10
created: 11.05.2021 19:16:35
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

void print(const vector<int> &arr, int till)
{
    rep (i, 0, till, 1)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
};

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> l(n);

    rep(i, 0, n - 1, 1) cin >> a[i];
    rep(i, 0, n - 1, 1) cin >> l[i];

    vector<int> unlock;
    set<int> lock; //indices
    rep(i, 0, n - 1, 1)
    {
        if (l[i] == 0)
            unlock.push_back(a[i]);
        else
            lock.insert(i);
    }

    sort(unlock.rbegin(), unlock.rend());
    vector<int> sol(n);
    int j = 0;
    rep (i, 0, n - 1, 1)
    {
        if (lock.count(i) == 0)
        {
            sol[i] = unlock[j];
            j++;
        }

        else
            sol[i] = a[i];
    }

    print(sol, n - 1);
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
