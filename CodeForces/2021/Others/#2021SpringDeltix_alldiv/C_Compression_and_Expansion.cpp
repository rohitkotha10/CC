/*
author:  rohitkotha10
created: 30.05.2021 21:15:03
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

void print(const vector<int> &arr)
{
    int n = arr.size();
    rep(i, 0, n - 2, 1)
            cout
        << arr[i] << '.';
    cout << arr[n - 1] << endl;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];
    vector<int> sol = {1};
    print(sol);

    rep(i, 1, n - 1, 1)
    {
        if (arr[i] == 1)
        {
            sol.push_back(1);
            print(sol);
            continue;
        }
        for (int j = sol.size() - 1; j >= 0; j--)
        {
            if (sol[j] + 1 == arr[i])
            {
                sol.resize(j + 1);
                sol[j]++;
                print(sol);
                break;
            }
        }
    }
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
