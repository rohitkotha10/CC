/*
author:  rohitkotha10
created: 02.07.2021 18:48:14
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: tut
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    vector<int> sol(n + 1, 1);
    sol[0] = 0;
    sol[n] = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        int temp = 1;
        for (int j = i * 2; j <= n; j += i)
        {
            if (arr[i] < arr[j])
            {
                temp = max(temp, 1 + sol[j]);
            }
        }
        sol[i] = temp;
    }

    cout << *max_element(sol.begin(), sol.end()) << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
