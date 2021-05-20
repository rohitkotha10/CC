/*
author:  rohitkotha10
created: 12.05.2021 16:57:33
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

int testnum = 0;
int testflag = 0;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
};

bool comp(int a, int b)
{
    return a > b;
}

void print(const vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    sort(arr.rbegin(), arr.rend());

    int i = 1;
    while (i < n)
    {
        int gmax = 0;
        int map = 0;
        rep(j, i, n - 1, 1)
        {
            int temp = 0;
            temp = gcd(arr[j], arr[i - 1]);
            if (temp > gmax)
            {
                gmax = temp;
                map = j;
            }
        }


        if (gmax <= 1)
            break;

        swap(arr[map], arr[i]);
        i++;
        sort(arr.begin() + i, arr.end(), comp);
    }

    print(arr);
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        testnum++;
        solve();
    }
}
