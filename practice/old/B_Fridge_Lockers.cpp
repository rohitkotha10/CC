/*
author:  rohitkotha10
created: 19.04.2021 17:33:28
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

//minimum 2 for each fridge
struct Token
{
    int val;
    int map;
};
 
bool operator<(const Token& a, const Token& b) { return a.val < b.val; };
bool operator==(const Token& a, const Token& b) { return a.val == b.val; };

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<Token> arr(n);
    rep(i, 0, n - 1, 1)
    {
        cin >> arr[i].val;
        arr[i].map = i + 1;
    }

    if(n > m || n == 2)
    {
        cout << -1 << endl;
        return;
    }

    int c = 0;

    rep(i, 0, n - 1, 1) c += arr[i].val;
    c *= 2;

    if (m > n)
    {
        m = m - n;
        while(m--)
        {
            c += arr[1].val + arr[0].val;
            cout << arr[1].map << ' ' << arr[0].map << endl;
        }
    }

    cout << c << endl;


    rep(i, 1, n - 1, 1)
    {
        cout << arr[i - 1].map << ' ' << arr[i].map << endl;
    }
    cout << arr[n - 1].map << ' ' << arr[0].map << endl;



    


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