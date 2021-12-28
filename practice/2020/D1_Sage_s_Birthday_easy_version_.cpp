#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

//single test case
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    if(n%2 == 0) cout << (n/2)-1 << endl;
    else cout << n/2 << endl;
    sort(arr.begin(), arr.end());
    vector<int> sol(n);
    for(int i = 1; i < n; i+=2)
    {
        sol[i] = arr[(i-1)/2];
    }

    for(int i = 0; i < n; i+=2)
    {
        sol[i] = arr[ n/2 + i/2 ];
    }

    for(int i = 0; i < n; i++) cout << sol[i] << ' ';
    cout << endl;
}
    
   

signed main()
{
    IOS;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}
