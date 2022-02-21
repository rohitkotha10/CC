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
    vector<int> h(n+1);
    rep(i, 0, n-1, 1) cin >> h[i];
    h[n] = -1;

    while(k > 0)
    {
        k--;
        int i = 0;
        while(i < n)
        {
            if(h[i] < h[i+1] )
            {
                h[i]++;
                break;
            }
            i++;
        }
        if(i < n)
        {
            if(k == 0)
            {
                cout << i+1 << endl;
                return;
            }
        }
        else
        {
            cout << -1 << endl;
            return;
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
