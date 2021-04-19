/*
author:  rohitkotha10
created: 19.04.2021 14:18:20
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//no test cases

bool is_palindrome(string s)
{
    if(s.size() == 1 && s != "-1") return true;
    string sold = s;
    reverse (s.begin(), s.end());
    if (s == sold) return true;
    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    list<string> sol;
    string saf = "@";

    bool flag = 0;

    rep(i, 0, n - 1, 1)
    {
        if(is_palindrome(arr[i])) saf = arr[i];
        if(i == n - 1) continue;
        rep(j, i + 1, n - 1, 1)
        {
            if(is_palindrome(arr[i] + arr[j]) && arr[i] != "-1")
            {
                if(arr[i] != saf) flag = 1;
                sol.push_back(arr[j]);
                sol.push_front(arr[i]);
                arr[i] = "-1";
                arr[j] = "-1";
            }
        }
    }

    if(sol.size() == 0)
    {
        if(saf == "@") cout << 0 << endl;
        else cout << saf.size() << endl << saf;
    }
    else
    {
        int add = 0;
        if(flag == 1 && saf != "@") add = saf.size();
        cout << sol.size()*m + add << endl;
        if(add != 0)
        {
            auto it = sol.begin();
            int cnt = 0;
            advance(it, sol.size()/2);
            sol.insert(it, saf);

        }
        for(string it : sol) cout << it;
    }
    


}

signed main()
{
    IOS;
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}