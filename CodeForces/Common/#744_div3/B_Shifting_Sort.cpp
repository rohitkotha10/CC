/*
author:  rohitkotha10
created: 28.09.2021 20:14:45
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

struct Sol
{
    int l, r, d;
};

int get_ind(list<int> arr, std::__cxx11::list<long long>::iterator it)
{
    int cnt = 0;
    for (auto pos = arr.begin(); pos != arr.end(); pos++)
    {
        cnt++;
        if (it == pos)
            return cnt;
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    list<int> arr;
    vector<int> sorted;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
        sorted.push_back(val);
    }

    sort(sorted.begin(), sorted.end());

    vector<Sol> shifted;

    for (int i = 0; i < n - 1; i++)
    {
        auto start = arr.begin();
        advance(start, i);

        if (sorted[i] == *start)
            continue;

        auto it = find(start, arr.end(), sorted[i]);
        int index = i;

        for (auto it = start; it != arr.end(); it++)
        {
            index++;
            //cout << "S " << index << endl;
            if (*it == sorted[i])
            {
                shifted.push_back(Sol{i + 1, index, index - i - 1});
                arr.erase(it);
                arr.insert(start, sorted[i]);
                start++;
                break;
            }
        }
    }
    int k = shifted.size();
    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << shifted[i].l << ' ' << shifted[i].r << ' ' << shifted[i].d << endl;
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
