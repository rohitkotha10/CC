#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;


void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];


    int cnt1 = 0;
    int cnt0 = 0;
    rep(i, 0, n - 1, 1)
    {
        if(arr[i] == 1) cnt1++; 
        if(arr[i] == 0) cnt0++; 
    }

    if(cnt1 <= n/2)
    {
        cout << n/2 << endl;
        rep(i, 1, n/2, 1) cout << 0 << ' ';
        cout << endl;
        return;
    }

    int len = n - 1;
    int ans = 0;

    if(cnt1 % 2 == 0)
    {
        cout << cnt1 << endl;
        rep(i, 1, cnt1, 1) cout << 1 << ' ';
        cout << endl;
        return;
    }
    else
    {
        cout << cnt1-1 << endl;
        rep(i, 1, cnt1-1, 1) cout << 1 << ' ';
        cout << endl;
        return;
    }

    
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
