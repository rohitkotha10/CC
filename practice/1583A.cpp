/*
author:  rohitkotha10
created: 03.01.2022 20:56:11
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

set<int> primes;
vector<bool> check{0};

void init_sieve(int max)
{
    vector<int> all{0};
    for (int i = 1; i <= max; i++)
    {
        check.push_back(1);
        all.push_back(i);
    }
    check[1] = 0;

    int n = max;

    int k = 2;

    while (k * k <= n)
    {
        int i = 2;
        while (i * k <= n)
        {
            check[k * i] = 0;
            i++;
        }
        k++;
    }

    for (int i = 1; i <= max; i++)
    {
        if (check[i] == 1)
        {
            primes.insert(all[i]);
        }
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    int ans = 1;
    for (int i : arr)
        sum += i;
    if (primes.count(sum) == 0)
    {
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << ' ';
        }
    }
    else
    {
        cout << n - 1 << endl;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                ans = i;
                break;
            }
        }

        for (int i = 0; i < ans; i++)
            cout << i + 1 << ' ';

        for (int i = ans + 1; i < n; i++)
            cout << i + 1 << ' ';
    }
    cout << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    init_sieve(20210);
    while (t--)
        solve();
}
