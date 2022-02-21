/*
author:  rohitkotha10
created: 22.01.2022 23:46:40
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int getMex(int first, int last, vector<int> arr);

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int cur = 0;
    vector<int> sol(n);
    while (true)
    {
        int ans = 0;
        for (int i = cur; i < n; i++)
        {
            int mex = getMex(cur, i, arr);
            if(mex(cur, i, arr) > ans)
            {
                cur = i;
                ans = mex(cur, i, arr);
            }
            
        }
    }
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
