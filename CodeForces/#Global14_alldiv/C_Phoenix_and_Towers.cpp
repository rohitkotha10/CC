/*
author:  rohitkotha10
created: 02.05.2021 20:51:55
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

struct Token{ int map, val, pos; };
bool comp(const Token& a, const Token& b){ return a.val < b.val; };
bool indcomp(const Token& a, const Token& b){ return a.map < b.map; };

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<Token> arr;
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        arr.push_back(Token{i + 1, val, 0});
    }

    sort(arr.begin(), arr.end());

    if (m == n)
    {
        if (arr[n - 1].val - arr[0].val > x)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            rep (i, 1, n, 1)
                cout << i << ' ';
            cout << endl;
        }
        return;
    }

    int least = n / m;
    vector<int> prefix_sum(n + 1);
    rep(i, 0, n - 1, 1)
    {
        prefix_sum[i + 1] = prefix_sum[i] + arr[i].val;
    }

    arr[0].pos = 1;
    int i = 1;


    sort(arr.begin(), arr.end(), indcomp);
    cout << "YES" << endl;
    rep (i, 0, n - 1, 1)
        cout << arr[i].pos << ' ';
    cout << endl;

}

signed main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
