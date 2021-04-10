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

    if(arr[0] != arr[1] && arr[0] != arr[2]) cout << 1 << endl;
    else
    {
        rep(i, 1, n-1, 1)
        {
            if(arr[i] != arr[0])
            {
                cout << i + 1 << endl;
                return;
            }
        }
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
