/*
author:  rohitkotha10
created: 29.04.2021 21:46:00
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

struct Token { int map, val; };
bool operator<(const Token& a, const Token& b) { return a.map < b.map; };
bool operator>(const Token& a, const Token& b) { return a.map > b.map; };
bool operator==(const Token& a, const Token& b) { return a.map == b.map; };

bool comp(const Token& a, const Token& b){ return a.val > b.val; };
//no test
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rep(i, 0, n - 1, 1) cin >> a[i];
    rep(i, 0, n - 1, 1) cin >> b[i];


    int sum = 0;

    rep(i, 0, n - 1, 1)
        sum += a[i] * b[i];

    int sumchange = 0;

    int k = 2;
    while(k <= n)
    {
        rep (i, 0, n - k, 1)
        {
            int temp = 0;
            reverse(a.begin() + i, a.begin() + k + i );
            rep(i, 0, n - 1, 1)
                temp += a[i] * b[i];

            sumchange = max(sumchange, temp);
            reverse(a.begin() + i, a.begin() + k + i );
        }
        k++;
    }

    cout << max(sum, sumchange)<< endl;

}

signed main()
{
    IOS;
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}
