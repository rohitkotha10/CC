/*
author:  rohitkotha10
created: 18.07.2022 08:13:05
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
    vector<string> arr(n);
    set<string> ans;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (string s : arr)
        ans.insert(s);
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        string cur = arr[i];
        for (int i = 1; i <= cur.length(); i++)
        {
            string c1 = cur.substr(0, i);
            string c2 = cur.substr(i, cur.length() - i);
            if (ans.count(c1) > 0 && ans.count(c2) > 0)
            {
                flag = 1;
                break;
            }
        }
        cout << flag;
    }
    cout << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
