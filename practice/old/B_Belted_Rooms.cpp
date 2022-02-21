/*
author:  rohitkotha10
created: 23.04.2021 13:40:57
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool flag = 1;
    rep(i, 0, n - 1, 1)
    {
        if(s[i] == '>')
        {
            rep(j, i, n - 1, 1) 
            {
                if(s[j] == '<')
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        else if(s[i] == '<')
        {
            rep(j, i, n - 1, 1) 
            {
                if(s[j] == '>')
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
    }
    if(flag == 1)
    {
        cout << n << endl;
        return;
    }

    int cnt = 0;
    if(s[0] == '-' || s[n - 1] == '-') cnt++;

    rep(i, 1, n - 1, 1)
    {
        if(s[i] == '-' || s[i - 1] == '-') cnt++;
    }

    cout << cnt << endl;


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