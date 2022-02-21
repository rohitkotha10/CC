#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n+1, 0);
    rep(i, 1, n, 1) arr[i] = i;

    if(n == 2 && k > 0)
    {
        cout << -1 << endl;
        return;
    }

    if(n == 1)
    {
        if(k == 0) cout << 1 << endl;
        else cout << -1 << endl;
        return;
    }

    if( (( k > n/2) && n%2 == 1 ) || ( (k > (n/2) - 1) && n%2 == 0)  )
    {
        cout << -1 << endl;
        return;
    }

    for(int i = 2; i <= n; i += 2)
    {
        if(k == 0) break;
        swap(arr[i], arr[i+1]);
        k--;
    }

    rep(i, 1, n, 1) cout << arr[i] << ' ';
    cout << endl;
    
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
