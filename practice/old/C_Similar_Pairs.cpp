/*
author:  rohitkotha10
created: 14.04.2021 22:13:14
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
    vector<int> arr(n);
    vector<int> odds;
    vector<int> evens;
    rep(i, 0, n - 1, 1)
    {
        cin >> arr[i];
        (arr[i] % 2 == 0) ? evens.push_back(arr[i]) : odds.push_back(arr[i]);
    }

    if(odds.size() % 2 == 1)
    {
        rep(i, 0, odds.size() - 1, 1)
        {
            rep(j, 0, evens.size() - 1, 1)
            {
                if(abs(evens[j] - odds[i]) == 1)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
        cout << "NO\n";
    }

    else cout << "YES\n";

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
