/*
author:  rohitkotha10
created: 16.06.2021 07:57:23
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

void solve()
{
    int aint, bint;
    cin >> aint >> bint;
    vector<int> b;
    while (bint > 0)
    {
        int rem = bint % 10;
        b.push_back(rem);
        bint /= 10;
    }

    reverse(b.begin(), b.end());

    int n = b.size();
    vector<int> a(n, 0);
    int now = 0;
    while (aint > 0)
    {
        int rem = aint % 10;
        a[now] = rem;
        now++;
        aint /= 10;
    }

    reverse(a.begin(), a.end());

    // for (int i : a)
    //     cout << i;
    // cout << endl;
    // for (int i : b)
    //     cout << i;
    // cout << endl;

    int ans = 0;
    int fir = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (b[i] == a[i])
        {
        }
        else if (b[i] == 0)
        {
            ans += (10 - a[i]) * fir + 1;
            //cout << ans << endl;
            a[i - 1]++;
        }

        else
        {
            ans += (b[i] - a[i]) * fir;
            //cout << ans << endl;
        }

        fir *= 10;
        fir++;
    }

    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
