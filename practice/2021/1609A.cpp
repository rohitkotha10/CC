/*
author:  rohitkotha10
created: 19.01.2022 19:51:30
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

pair<int, int> f(int a)
{
    int cnt = 0;
    while (a % 2 == 0)
    {
        cnt++;
        a /= 2;
    }
    return make_pair(cnt, a);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int bp = 1;
    vector<int> even;
    sort(arr.begin(), arr.end());

    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            sum += arr[i];
            bp = arr[i];
        }
        else
        {
            sum += f(arr[i]).second;
            cnt += f(arr[i]).first;
            bp = max(bp, f(arr[i]).second);
        }
    }

    sum += bp * (pow(2, cnt) - 1);
    cout << sum << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
