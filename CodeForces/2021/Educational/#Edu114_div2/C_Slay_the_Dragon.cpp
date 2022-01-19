/*
author:  rohitkotha10
created: 20.09.2021 20:53:49
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

signed main()
{
    IOS;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int m;
    cin >> m;
    vector<int> x(m), y(m);
    for (int i = 0; i < m; i++)
        cin >> x[i] >> y[i];

    int sumori = 0;
    for (int i : arr)
        sumori += i;

    for (int i = 0; i < m; i++)
    {
        int sum = sumori;
        int cnt = 0;
        int it = lower_bound(arr.begin(), arr.end(), x[i]) - arr.begin();

        int fighter = 0;
        if (it == n)
        {
            fighter = arr.back();
            cnt += x[i] - fighter;
        }
        else
        {
            fighter = arr[it]; // or the one before
        }

        cnt += max(0LL, y[i] - sum + fighter);

        if (it != 0)
        {
            int extra = x[i] - arr[it - 1];
            extra += max(0LL, y[i] - sum + arr[it - 1]);
            cnt = min(cnt, extra);
        }

        cout << cnt << endl;
    }
}
