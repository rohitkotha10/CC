/*
author:  rohitkotha10
created: 02.05.2021 19:23:41
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

struct Token{ int map, val; };
bool comp(const Token& a, const Token& b) { return a.val < b.val; }
//missed adding only 1 bag case
void solve()
{
    int n, w;
    cin >> n >> w;
    vector<Token> arr(n);
    rep(i, 0, n - 1, 1)
    {
        cin >> arr[i].val;
        arr[i].map = i + 1;
    }

    sort(arr.begin(), arr.end(), comp);

    int wmin = w / 2;
    if (w % 2 != 0) wmin++;

    int ind = 0;
    bool flag = 1;
    bool found = 0;
    int sum = 0;

    rep(i, 0, n - 1, 1)
    {  
        sum += arr[i].val;
        if (sum >= wmin)
        {
            found = 1;
            ind = i;
            if (sum > w)
                flag = 0;
            break;
        }
    }

    if (found == 0 || flag == 0)
    {
        rep (i, 0, n - 1, 1)
        {
            if (arr[i].val >= wmin && arr[i].val <= w)
            {
                cout << 1 << endl;
                cout << arr[i].map << endl;
                return;
            }
        }
    }

    if(flag == 0 || found == 0)
        cout << -1 << endl;
    else
    {
        cout << ind + 1 << endl;
        rep(i, 0, ind, 1)
        {
            cout << arr[i].map << ' ';
        }
        cout << endl;
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
