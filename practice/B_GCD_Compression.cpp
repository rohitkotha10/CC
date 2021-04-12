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

    cout << even.size() << ' ' << odd.size() << endl;
    return;

    if(odd.size() % 2 == 1 && odd.size() > 2)
    {
        rep(i, 1, odd.size() - 2, 2)
        {
            cout << odd[i].map << ' ' << odd[i + 1].map << endl;
        }

        rep(i, 1, even.size() - 2, 2)
        {
            cout << even[i].map << ' ' << even[i + 1].map << endl;
        }
    }

    else
    {
        if(odd.size() >= 2)
        {
            rep(i, 0, odd.size() - 2, 2)
            {
                cout << odd[i].map << ' ' << odd[i + 1].map << endl;
            }


            rep(i, 2, even.size() - 2, 2)
            {
                cout << even[i].map << ' ' << even[i + 1].map << endl;
            }

        }
        else
        {
            rep(i, 0, even.size() - 2, 2)
            {
                cout << even[i].map << ' ' << even[i + 1].map << endl;
            }
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
