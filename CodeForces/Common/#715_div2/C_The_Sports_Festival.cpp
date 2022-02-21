/*
author:  rohitkotha10
created: 16.04.2021 20:33:30
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//no test case
void solve()
{
    int n;
    cin >> n;

    list<int> arr;
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        arr.push_back(val);
        
    }

    arr.sort();

    if(n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int ans = 0;

    while(arr.size() != 2)
    {
        auto start = arr.begin();
        auto last = arr.end();
        last--;
        auto firpoint = start;
        auto laspoint = last;
        firpoint++;
        laspoint--;
        if(*last - *firpoint < *laspoint - *start)
        {
            ans += *last - *start;
            arr.erase(start);
        }
        else if(*last - *firpoint == *laspoint - *start)
        {
            ans += *last - *start;
            int lv = *last;
            int fv = *start;
            int cntl = 0;
            int cntf = 0;
            for(auto it = arr.begin(); it != arr.end(); it++)
            {
                if(*it == lv) cntl++;
                if(*it == fv) cntf++;
            }
            cout << cntl << ' ' << cntf << endl;
            if(cntl <= cntf) arr.erase(last);
            else arr.erase(start);
        }
        else
        {
            ans += *last - *start;
            arr.erase(last);
        }
        
        //cout << *arr.begin() << endl;

        //cout << *point << ' ' << ans << endl;
    }
    ans += arr.back() - arr.front();

    cout << ans << endl;

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
