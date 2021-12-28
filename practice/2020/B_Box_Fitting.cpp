/*
author:  rohitkotha10
created: 27.04.2021 18:23:09
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: ExplodingFreeze
int Log2(int a)
{
    rep(i, 0, 20, 1)
        if (pow(2, i) == a) return i;
    return 0;
}
void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> arr(21);
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        arr[Log2(val)]++;
    }

    int tot = n;
    int cnt = 1;
    int left = w;
    while(tot > 0)
    {
        int cur = -1;
        for(int i = 0; i <= 20; i++)
        {
            if (arr[i] && left >= 1LL << i)
                cur = i;
        }

        if (cur == -1)
        {
            cnt++;
            left = w;
            continue;
        }   

        left -= 1LL << cur;
        arr[cur]--;
        tot--;
    }

    cout << cnt << endl;
}

signed main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
