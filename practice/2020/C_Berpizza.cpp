/*
author:  rohitkotha10
created: 09.06.2021 08:06:07
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
//no test max_elemetn O(n) complexity, don't use
//awesome sol by HealthyUG to store -val
struct Token
{
    int ind, val;
};

bool comp(const Token &a, const Token &b)
{
    return a.val < b.val;
}
void solve()
{
    int q;
    cin >> q;

    set<pair<int, int>> ind;
    set<pair<int, int>> val;

    int start = 0;
    int number = 1;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int m;
            cin >> m;
            m = -m;
            ind.emplace(number, m);
            val.emplace(m, number);
            number++;
        }

        else if (type == 2)
        {
            int val1 = ind.begin()->second;
            int ind1 = ind.begin()->first;

            cout << ind1 << ' ';
            pair<int, int> indp = make_pair(ind1, val1);
            pair<int, int> valp = make_pair(val1, ind1);
            ind.erase(indp);
            val.erase(valp);
        }

        else
        {
            auto it = val.begin();
            int val1 = it->first;
            int ind1 = it->second;

            cout << ind1 << ' ';
            pair<int, int> indp = make_pair(ind1, val1);
            pair<int, int> valp = make_pair(val1, ind1);
            ind.erase(indp);
            val.erase(valp);
        }
    }
}

signed main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}
