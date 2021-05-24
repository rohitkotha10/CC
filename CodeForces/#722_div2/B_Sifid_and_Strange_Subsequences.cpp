/*
author:  rohitkotha10
created: 24.05.2021 20:39:19
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];

    int flag = 0;
    int cnt = 0;

    rep(i, 0, n - 1, 1)
    {
        if (arr[i] > 0)
            cnt++;
        if (arr[i] == 0)
            flag++;
    }

    if (cnt == 0)
        cout << n << endl;
    else
    {
        if (flag == 1)
        {
            sort(arr.begin(), arr.end());
            rep(i, 0, n - 1, 1)
            {
                if (arr[i] == 0)
                {
                    if (i == 0)
                    {
                        cout << 2 << endl;
                        return;
                    }

                    int a = arr[i + 1];
                    for (int j = i - 1; j >= 0; j--)
                    {
                        if (-arr[j] >= a)
                        {
                            int now = i - j - 1;
                            int ans = n - cnt + 1;
                            ans -= now;
                            cout << ans << endl;
                            return;
                        }
                    }
                    cout << 2 << endl;
                }
            }
        }
        else if (flag == 0)
            cout << n - cnt + 1 << endl;
        else
        {
            cout << n - cnt << endl;
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
