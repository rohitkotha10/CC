/*
author:  rohitkotha10
created: 26.04.2021 14:55:09
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;



struct Token
{
    int i1, j1, val;
};

bool comp(const Token& a, const Token& b)
{
    return a.val < b.val;
};

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<Token> arr;
    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, m - 1, 1)
        {
            int val;
            cin >> val;
            arr.push_back(Token{i, j, val}); 
        }
    }

    sort(arr.begin(), arr.end(), comp);


    int cnt = 0;
    rep(i, 0, m - 1, 1)
    {
        if (arr[i].j1 == cnt)
        {
            cnt++;
            continue;
        }

        rep(j, 0, arr.size() - 1, 1)
        {
            if(arr[j].i1 == arr[i].i1 && arr[j].j1 == cnt)
            {
                arr[j].j1 = arr[i].j1; 
                arr[i].j1 = cnt;
            }
        }
        cnt++;
    }

    vector<vector<int>> sol(n, vector<int>(m));
    rep(i, 0, arr.size() - 1, 1)
    {
        int indi = arr[i].i1;
        int indj = arr[i].j1;
        int val = arr[i].val;
        sol[indi][indj] = val;
    }

    rep(i, 0, n - 1, 1)
    {
        rep(j, 0, m - 1, 1)
        {
            cout << sol[i][j] << ' ';
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
