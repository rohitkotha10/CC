/*
author:  rohitkotha10
created: 28.09.2021 21:49:13
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;


bool checkRight(vector<string> &ori, int k, int i, int j, int n, int m);
bool checkLeft(vector<string> &ori, int k, int i, int j, int n, int m);
bool checkMid(vector<string> &ori, int k, int i, int j, int n, int m);

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < 0; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '*')
            {
                if (!(checkRight(arr, k, i, j, n, m) || checkMid(arr, k, i, j, n, m) || checkMid(arr, k, i, j, n, m)))
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }

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
