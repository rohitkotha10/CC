/*
author:  rohitkotha10
created: 12.04.2021 19:33:37
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
    int map;
    int val;
};

void solve()
{
    int n;
    cin >> n;
    int len = 2 * n;
    vector<Token> arr(len);
    rep(i, 0, len - 1, 1)
    {
        arr[i].map = i + 1;
        cin >> arr[i].val;
    }


    vector<Token> odd;
    vector<Token> even;

    rep(i, 0, len - 1, 1)
    {
        if(arr[i].val % 2 == 0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }

    // cout << even.size() << ' ' << odd.size() << endl;
    // return;

    if((int)odd.size() % 2 == 1 )
    {
        odd.pop_back();
        int i = 0;
        while(i <= (int)odd.size() - 2)
        {
            cout << odd[i].map << ' ' << odd[i + 1].map << endl;
            i += 2;
        }

        even.pop_back();
        i = 0;
        while(i <= (int)even.size() - 2)
        {
            cout << even[i].map << ' ' << even[i + 1].map << endl;
            i += 2;
        }
    }

    else
    {
        if((int)odd.size() >= 2)
        {
            odd.pop_back();
            odd.pop_back();
        }
        else
        {
            even.pop_back();
            even.pop_back();
        }

        int i = 0;
        while(i <= (int)odd.size() - 2)
        {
            cout << odd[i].map << ' ' << odd[i + 1].map << endl;
            i += 2;
        }

        i = 0;
        while(i <= (int)even.size() - 2)
        {
            cout << even[i].map << ' ' << even[i + 1].map << endl;
            i += 2;
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
