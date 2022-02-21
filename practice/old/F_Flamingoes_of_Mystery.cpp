/*
author:  rohitkotha10
created: 24.06.2021 15:16:20
*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

signed main()
{
    int n;
    cin >> n;

    vector<int> arr{0};
    for (int i = 1; i < n; i++)
    {
        cout << "? " << i << ' ' << i + 1 << endl;
        cout << endl;
        int cnt;
        cin >> cnt;
        arr.push_back(cnt);
    }

    int th;
    cout << "? " << 1 << ' ' << 3 << endl;
    cout << endl;

    cin >> th;

    int a1 = th - arr[2];
    vector<int> sol(n + 1, 0);
    sol[1] = a1;

    for (int i = 2; i <= n; i++)
        sol[i] = arr[i - 1] - sol[i - 1];

    cout << "! ";
    for (int i = 1; i <= n; i++)
    {
        cout << sol[i] << ' ';
    }
    cout << endl;
}
