/*
author:  rohitkotha10
created: 08.09.2021 20:17:02
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<vector<char>> arr(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                arr[i][j] = 'X';
            else
                arr[i][j] = '=';
        }
    }

    vector<int> check;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2')
        {
            check.push_back(i);
        }
    }

    if ((int)check.size() == 1 || (int)check.size() == 2)
    {
        cout << "NO" << endl;
        return;
    }

    // cout << "S " << check.size() << endl;
    // for (int i = 0; i < check.size(); i++)
    //     cout << check[i] << ' ';
    // cout << endl;
    // return;
    cout << "YES" << endl;
    for (int i = 0; i < (int)check.size() - 1; i++)
    {
        arr[check[i]][check[i + 1]] = '+';
        arr[check[i + 1]][check[i]] = '-';
    }

    if ((int)check.size() >= 3)
    {
        arr[check.back()][check[0]] = '+';
        arr[check[0]][check.back()] = '-';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
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
