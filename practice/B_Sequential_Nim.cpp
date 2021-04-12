/*
author:  rohitkotha10
created: 12.04.2021 14:32:50
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    int mn = *min_element(arr.begin(), arr.end());
    int mx = *max_element(arr.begin(), arr.end());
    if(mn == mx && mn == 1)
    {
        if(n % 2 == 1) cout << "First\n";
        else cout << "Second\n";
        return;
    }

    bool flag = 1;
    if(arr[0] == 1)
    {
        int i = 0;
        int cnt = 0;
        while(arr[i] == 1 && i < n)
        {
            cnt++;
            //cout << i << " H " << cnt << endl;
            i++;
        }
        if(cnt % 2 == 1) flag = 0;
        else flag = 1;
    }
    if(flag == 1) cout << "First\n";
    else cout << "Second\n";
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
