/*
author:  rohitkotha10
created: 23.04.2021 20:21:52
*/
#include <bits/stdc++.h>
using namespace std;
//unsolved test case 4 test 2 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

struct Token
{
    int i1, j1, val;
    Token(int i, int j, int v)
        : i1 { i }, j1 { j }, val { v } {};
};

bool comp(const Token& a, const Token& b) { return a.val < b.val; };


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<Token> ord;
    vector<vector<int>> arr(n);
    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, m - 1, 1)
        {
            int val;
            cin >> val;
            arr[i].push_back(val);
            ord.push_back(Token{i, j, val});
        }
    }

    sort(ord.begin(), ord.end(), comp);
    int j = 0;
    rep(it, 0, m - 1, 1)
    {
        int ic = ord[it].i1;
        int jc = ord[it].j1;
        swap(arr[ic][j], arr[ic][jc]);
        j++;
        
    }

    // for(Token i : ord) cout << i.i1 << ' ';
    // cout << endl; 
    // for(Token i : ord) cout << i.j1 << ' ';
    // cout << endl; 
    // for(Token i : ord) cout << i.val << ' ';
    // cout << endl; 
    // cout << endl; 
    // cout << endl; 
    // return;

    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, m - 1, 1) cout << arr[i][j] << ' ';
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