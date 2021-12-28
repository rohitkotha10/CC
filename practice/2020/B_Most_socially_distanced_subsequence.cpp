/*
author:  rohitkotha10
created: 23.05.2021 11:48:20
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
    list<int> arr;
    if (n == 2)
    {
        int a, b;
        cin >> a >> b;
        cout << 2 << endl;
        cout << a << ' ' << b << endl;
        return;
    }

    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    auto it = arr.begin();
    it++;
    while (true)
    {
        auto cur = it;
        auto prev = it;
        prev--;
        auto succ = it;
        succ++;

        //cout << *prev << ' ' << *cur << ' ' << *succ << endl;
        if (*cur >= *prev && *cur <= *succ)
        {
            arr.erase(cur);
            it = succ;
            n--;
        }
        else if (*cur <= *prev && *cur >= *succ)
        {
            arr.erase(cur);
            it = succ;
            n--;
        }
        else
            it++;

        if (*succ == arr.back())
            break;
    }

    cout << arr.size() << endl;
    for (int i : arr)
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
