/*
author:  rohitkotha10
created: 11.07.2021 00:47:37
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int inverted(int a, int ref)
{
    int num = a;
    int x = log2(ref) + 1;
    for (int i = 0; i < x; i++)
        num = (num ^ (1 << i));
    return num;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> sol{0};
    arr[0] = arr[0] ^ 0;
    for (int i = 1; i < n; i++)
    {
        int toinvert = arr[i - 1] & arr[i];
        int ans = arr[i - 1] & inverted(toinvert, arr[i - 1]);
        sol.push_back(ans);
        arr[i] = arr[i] ^ ans;
    }

    for (int i : sol)
        cout << i << ' ';
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
