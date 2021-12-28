/*
author:  rohitkotha10
created: 23.04.2021 12:24:23
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
bool operator<(const Token& a, const Token& b) { return a.val < b.val; };
bool operator>(const Token& a, const Token& b) { return a.val > b.val; };
bool operator==(const Token& a, const Token& b) { return a.val == b.val; };

void solve()
{
    int n;
    cin >> n;
    vector<Token> arr(n);
    rep(i, 0, n - 1, 1)
    {
        cin >> arr[i].val;
        arr[i].map = i + 1;
    }

    sort(arr.begin(), arr.end());
    if(arr[0].val == arr[n - 1].val)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    rep(i, 1, n - 1, 1)
    {
        int ind = i - 1;
        while(arr[i].val == arr[i - 1].val && i < n) i++;
        if(i == n)
        {//ind - 1 to rest
            for(int k = i - 1; k >= ind + 1; k--)
            {
                cout << arr[ind - 1].map << ' ' << arr[k].map << endl;
            }
            continue;
        }
        for(int j = i - 1; j >= ind; j--)
        {
            cout << arr[i].map << ' ' << arr[j].map << endl;
        }

    }


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