/*
author:  rohitkotha10
created: 11.06.2021 13:50:39
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
//sol: tut
bool verify(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    rep(i, 0, n - 1, 1)
    {
        if (arr[i] != 0)
        {
            if (arr[i] == arr[n - 1])
                return true;
            else
                return false;
        }
    }

    return false;
};

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1)
            cin >>
        arr[i];

    if (verify(arr))
    {
        cout << 0 << endl;
        return;
    }
    int sum = 0;

    for (int val : arr)
        sum += val;

    int k = 1;
    bool flag = 0;
    while (k < n)
    {

        int check = sum / (n - k);
        if (sum % (n - k) != 0)
            check++;

        if (flag == 0 && arr[0] >= check)
        {
            flag = 1;
            reverse(arr.begin(), arr.end());
        }

        // cout << k << ' ' << check << ' ';

        // for (int i : arr)
        //     cout << i << ' ';
        // cout << endl;

        rep(i, 0, n - 1, 1)
        {
            if (arr[i] < check && arr[i] != 0)
            {
                if (i == n - 1)
                {
                    cout << -1 << endl;
                    return;
                }
                int add = 0;
                for (int j = i; j >= 0; j--)
                {
                    if (arr[j] != 0)
                    {
                        add = arr[j];
                        arr[j] = 0;
                        break;
                    }
                }

                arr[i + 1] += add;
                arr[i] = 0;
                break;
            }
        }

        // for (int i : arr)
        //     cout << i << ' ';
        // cout << endl;

        if (verify(arr))
        {
            cout << k << endl;
            return;
        }

        k++;
    }

    cout << k - 1 << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
