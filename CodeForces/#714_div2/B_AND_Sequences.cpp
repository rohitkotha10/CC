#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;
int MOD = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n- 1, 1) cin >> arr[i];

    sort(arr.begin(), arr.end());

    if(arr[0] == arr[n-1])
    {
        int ans = 1;
        rep(i, 1, n , 1)
        {
            ans = ( ans * i )% MOD;
        }
        cout << ans << endl;
        return;
    }

    int val = arr[0];
    int cnt = 0;

    rep(i, 1, n-1, 1)
    {
        val = val & arr[i];
    }

    rep(i, 0, n - 1, 1)
    {
        arr[i] = arr[i] - val;
    }

    rep(i, 0, n - 1, 1)
    {
        if(arr[i] == 0) cnt++;
    }

    if( cnt < 2 )
    {
        cout << 0 << endl;
        return;
    }

    int ans = 1;
    
    rep(i, 1, n - 2, 1)
    {
        ans = ( ans * i )% MOD;
    }
    ans *= ( cnt - 1 ) % MOD;
    ans *= ( cnt ) % MOD;
    ans = ans % MOD;
    cout << ans << endl;

    
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
