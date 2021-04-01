#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i,start,endin,incre) for(int i = start; i < endin; i+= incre)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i,0,n,1) cin >> arr[i];
    sort(arr.rbegin(), arr.rend());

    rep(i,0,n,1)
    {
        if(arr[i] <= n-i)
        {
            cout << n-i+1 << endl;
            return;
        }
    }

    cout << 1 << endl;



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
