/*
author:  rohitkotha10
created: 15.06.2021 20:58:10
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
//Factorization need to be faster than O(sqrt(n))
int Fact(int x) 
{
    int ans = 0;
    int i = 2;
    while (i * i <= x)
    {
        while (x % i == 0)
        {
            ans++;
            x /= i;
        }
        i++;
    }
    if (x > 1)
        ans++;

    return ans;
}
void solve()
{
    int a, b, k;
    cin >> a >> b >> k;

    int fir = Fact(a);
    int las = Fact(b);

    //cout << fir << ' ' << las << endl;

    if (a == b && k == 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (b % a == 0 || a % b == 0)
    {
        if (k <= fir + las)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    if (k > 1 && k <= fir + las)
        cout << "YES" << endl;
    else
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