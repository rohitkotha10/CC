#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(2*n);
    rep(i, 0, 2*n-1, 1) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int a = arr[n];
    int b = arr[n-1];
    cout << a - b << endl;
    
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
