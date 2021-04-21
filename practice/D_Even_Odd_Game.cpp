/*
author:  rohitkotha10
created: 21.04.2021 18:04:33
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tutorial
void solve()
{
    int n;
    cin >> n;
    vector<int> odds;
    vector<int> evens;
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        if(val % 2 == 1) odds.push_back(val);
        else evens.push_back(val);
    }
    sort(evens.begin(), evens.end());
    sort(odds.begin(), odds.end());

    int alice = 0, bob = 0;

    bool turn = 0;

    rep(i, 0, n - 1, 1)
    {
        turn = 1 - turn;
        if(turn == 1)
        {
            if(evens.size() == 0) odds.pop_back();
            else
            {
                alice += evens[evens.size() - 1];
                evens.pop_back();
            } 
        }

        else
        {
            if(odds.size() == 0) evens.pop_back();
            else
            {
                bob += odds[odds.size() - 1];
                odds.pop_back();
            }
        }
        
    }

    cout << (alice > bob ? "Alice" : alice < bob ? "Bob" : "Tie") << endl;

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