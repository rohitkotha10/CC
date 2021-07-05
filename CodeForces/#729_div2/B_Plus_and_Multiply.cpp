/*
author:  rohitkotha10
created: 03.07.2021 18:41:02
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
    int n, a, b;
    cin >> n >> a >> b;
    if (a == 1)
    {
        cout << ((n - 1) % b == 0 ? "Yes" : "No") << endl;
        return;
    }

    int powa = 1;
    while (powa <= 1e9)
    {
        int req = n - powa;
        if (req < 0)
            break;
        if (req % b == 0)
        {
            //cout << req << endl;
            cout << "Yes" << endl;
            return;
        }
        powa *= a;
    }
    //cout << powa << endl;
    cout << "No" << endl;
    return;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
