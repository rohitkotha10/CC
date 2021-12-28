/*
author:  rohitkotha10
created: 06.07.2021 10:18:44
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: SecondThread
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int xor0 = arr[0];
    for (int i = 1; i < n; i++)
        xor0 = xor0 ^ arr[i];

    if (xor0 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    if (n == 2)
    {
        cout << "NO" << endl;
        return;
    }

    int xor1 = arr[0];
    for (int i = 1; i < n; i++)
    {
        int xor2 = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (xor1 == xor2 && xor2 == xor0)
            {
                cout << "YES" << endl;
                return;
            }
            xor2 ^= arr[j];
        }

        xor1 ^= arr[i];
    }
    cout << "NO" << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
