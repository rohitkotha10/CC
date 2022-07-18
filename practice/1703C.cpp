/*
author:  rohitkotha10
created: 18.07.2022 08:05:04
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        int steps;
        string s;
        cin >> steps >> s;
        int temp = 0;
        for (int i = 0; i < steps; i++)
        {
            if (s[i] == 'U')
                temp--;
            else
                temp++;
        }
        arr[i] += temp;
        arr[i] %= 10;
        if (arr[i] < 0)
            arr[i] += 10;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
