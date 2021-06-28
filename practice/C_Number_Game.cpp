/*
author:  rohitkotha10
created: 28.06.2021 19:03:34
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;

    if (n <= 2)
    {
        cout << (n == 2 ? "Ashishgup" : "FastestFinger") << endl;
        return;
    }

    if (n % 2 == 1)
    {
        cout << "Ashishgup" << endl;
        return;
    }

    int cnt = 0;

    while (n % 2 == 0)
    {
        n /= 2;
        cnt++;
    }

    //cout << n << endl;

    if (n == 1)
        cout << "FastestFinger" << endl;
    else
    {
        if (cnt >= 2)
        {
            cout << "Ashishgup" << endl;
        }
        else
        {
            //cout << n << ' ';
            cout << (prime(n) == 0 ? "Ashishgup" : "FastestFinger") << endl;
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
