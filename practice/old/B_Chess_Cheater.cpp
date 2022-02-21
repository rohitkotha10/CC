/*
author:  rohitkotha10
created: 23.06.2021 08:24:30
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int process(int &k, const int &cur, int extra)
{
    int cnt = 0;
    if (k >= cur)
    {
        k -= cur;
        cnt = 2 * cur + extra;
    }
    else
    {
        cnt = 2 * k;
        k = 0;
    }
    return cnt;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
            arr.push_back(i);
    }

    if (arr.size() == 0)
    {
        cout << max(0LL, 2 * k - 1) << endl;
        return;
    }

    if (arr.size() == 1)
    {
        cout << 2 * min(k, n - 1) + 1 << endl;
        return;
    }

    if (arr.size() == n)
    {
        cout << 2 * n - 1 << endl;
        return;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            cnt++;
            if (i > 0 && s[i - 1] == 'W')
                cnt++;
        }
    }

    vector<int> diffs;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] - 1 > 0)
            diffs.push_back(arr[i] - arr[i - 1] - 1);
    }

    int frontdiff = -1, backdiff = -1;
    if (arr.front() > 0)
        frontdiff = arr.front();
    if (n - 1 - arr.back() > 0)
        backdiff = n - 1 - arr.back();

    sort(diffs.begin(), diffs.end());

    int kor = k;

    k = kor;
    int c1 = cnt;

    for (int i = 0; i < diffs.size(); i++) //0 0
    {
        c1 += process(k, diffs[i], 1);
        if (k == 0)
            break;
    }

    k = kor;
    int c2 = cnt;

    if (frontdiff > 0 && backdiff < 0) // 1 0
    {
        for (int i = 0; i < diffs.size(); i++)
        {
            c2 += process(k, diffs[i], 1);
            if (k == 0)
                break;
        }
        c2 += process(k, frontdiff, 0);
    }

    k = kor;
    int c3 = cnt;

    if (frontdiff < 0 && backdiff > 0) // 1 0
    {
        for (int i = 0; i < diffs.size(); i++)
        {
            c3 += process(k, diffs[i], 1);
            if (k == 0)
                break;
        }
        c3 += process(k, backdiff, 0);
    }

    k = kor;
    int c4 = cnt;

    if (frontdiff > 0 && backdiff > 0) // 1 0
    {
        for (int i = 0; i < diffs.size(); i++)
        {
            c4 += process(k, diffs[i], 1);
            if (k == 0)
                break;
        }

        if (frontdiff > backdiff)
            swap(frontdiff, backdiff);
        c4 += process(k, frontdiff, 0);
        c4 += process(k, backdiff, 0);
    }

    int ans = max(c1, max(c2, max(c3, c4)));

    // cout << cnt << endl;

    // for (int i : diffs)
    //     cout << i << ' ';
    // cout << endl;

    // cout << frontdiff << ' ' << backdiff << endl;
    // cout << c1 << ' ' << c2 << ' ' << c3 << ' ' << c4 << endl;
    
    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}