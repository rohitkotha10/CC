/*
author:  rohitkotha10
created: 25.05.2021 22:19:10
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
    sort(arr.begin(), arr.end());
    int cnt = 1;
    multiset<int> s;
    rep(i, 1, n - 1, 1)
    {
        if (arr[i] != arr[i - 1])
        {
            s.insert(cnt);
            cnt = 1;
        }
        else
            cnt++;
    }
    s.insert(cnt);
    int i = 0;
    while (s.size() > 1)
    {
        int fir = *s.begin() + i;
        int las = *--s.end();
        fir--;
        las--;

        s.erase(s.begin());
        if (fir != 0)
            s.insert(fir);
        if ((int)s.size() == 0)
        {
            cout << 0 << endl;
            return;
        }
        s.erase(--s.end());
        if (las != 0)
            s.insert(las);

        if ((int)s.size() == 0)
        {
            cout << 0 << endl;
            return;
        }
    }

    cout << *s.begin() << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
