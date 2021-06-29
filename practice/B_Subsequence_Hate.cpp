/*
author:  rohitkotha10
created: 29.06.2021 10:43:43
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
    string s;
    cin >> s;
    int n = s.size();
    if (n <= 2)
    {
        cout << 0 << endl;
        return;
    }

    if (n == 3)
    {
        if (s == "101" || s == "010")
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }

    int flag101 = 0;
    for (int i = 0; i < n; i++) //check 101
    {
        if (flag101 == 0)
        {
            if (s[i] == '1')
                flag101++;
        }
        else if (flag101 == 1)
        {
            if (s[i] == '0')
                flag101++;
        }
        else if (flag101 == 2)
        {
            if (s[i] == '1')
                flag101++;
        }
    }

    int flag010 = 0;
    for (int i = 0; i < n; i++) //check 101
    {
        if (flag010 == 0)
        {
            if (s[i] == '0')
                flag010++;
        }
        else if (flag010 == 1)
        {
            if (s[i] == '1')
                flag010++;
        }
        else if (flag010 == 2)
        {
            if (s[i] == '0')
                flag010++;
        }
    }

    if (flag101 <= 2 && flag010 <= 2)
    {
        cout << 0 << endl;
        return;
    }

    int zeros = 0;
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ones++;
        else
            zeros++;
    }

    int ans = min(ones, zeros);
    int cur10 = ones;
    int cur01 = zeros;
    int done_zeros = 0;
    int done_ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            done_ones++;
        else
            done_zeros++;

        int temp01 = done_ones + zeros - done_zeros;
        int temp10 = done_zeros + ones - done_ones;
        cur10 = min(cur10, temp10);
        cur01 = min(cur01, temp01);
    }

    cout << min(cur01, min(ans, cur10)) << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
