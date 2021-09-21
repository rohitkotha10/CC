/*
author:  rohitkotha10
created: 20.09.2021 20:07:55
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
    char left = '(';
    char right = ')';

    string ori;
    for (int i = 1; i <= n; i++)
        ori.push_back(left);
    for (int i = 1; i <= n; i++)
        ori.push_back(right);

    string arr = ori;
    cout << ori << endl;

    for (int i = 1; i < n; i++)
    {
        arr[i] = right;
        arr[2 * n - i - 1] = left;
        cout << arr << endl;
        arr = ori;
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
