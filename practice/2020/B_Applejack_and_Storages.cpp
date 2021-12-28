/*
author:  rohitkotha10
created: 25.06.2021 17:26:19
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
    vector<int> arr(MAX);
    set<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr[val]++;

        pair<int, int> a;
        a.first = arr[val] - 1;
        a.second = val;

        if (s.find(a) != s.end())
        {
            auto changer = s.find(a);
            pair<int, int> replace = a;
            replace.first = arr[val];

            s.erase(a);
            s.insert(replace);
        }
        else
        {
            a.first++;
            s.insert(a);
        }
    }

    // for (auto i : s)
    //     cout << i.first << ' ' << i.second << endl;
    // return 0;
    int q;
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        int val;
        cin >> val;

        pair<int, int> a;
        a.first = arr[val];
        a.second = val;
        auto changer = s.find(a);
        if (ch == '-')
            arr[val]--;
        else
            arr[val]++;

        pair<int, int> replace = a;
        replace.first = arr[val];

        s.erase(a);
        s.insert(replace);

        // for (auto i : s)
        //     cout << i.first << ' ' << i.second << endl;
        auto it = s.end();

        int f1 = 1, f2 = 1, f3 = 1;
        it--;
        int a1 = it->first;
        if (it == s.begin())
        {
            f2 = 0;
            f3 = 0;
        }
        if (f2 == 1)
            it--;
        int a2 = it->first;
        if (it == s.begin())
            f3 = 0;
        if (f3 == 1)
            it--;
        int a3 = it->first;
        // cout << a1 << ' ' << a2 << ' ' << a3 << ' ' << endl;
        // cout << it->first << ' ' << it->second << endl;

        if (a1 >= 8)
            cout << "YES" << endl;
        else if (a1 < 4)
            cout << "NO" << endl;
        else //a1 4 5 6 or 7
        {
            if (a2 < 2 && f2 == 1)
            {
                cout << "NO" << endl;
                continue;
            }
            if (a1 >= 6 && a2 >= 2 && f2 == 1)
            {
                cout << "YES" << endl;
                continue;
            }
            if (a2 >= 4 && f2 == 1)
            {
                cout << "YES" << endl;
                continue;
            }
            if (a2 >= 2 && a3 >= 2 && f3 == 1 && f2 == 1)
            {
                cout << "YES" << endl;
                continue;
            }

            cout << "NO" << endl;
        }
    }
}
