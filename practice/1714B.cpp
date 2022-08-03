/*
author:  rohitkotha10
created: 02.08.2022 15:51:44
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    map<int, int> checker;
    for (int i = 0; i < n; i++)
    {
        checker[arr[i]]++;
    }

    int ans = 0;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        
        if(checker[arr[i]] > 1)
        {
            flag = 1;
            ans = i;
            checker[arr[i]]--;
        }
    }
    cout << ans + flag << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
