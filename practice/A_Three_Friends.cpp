#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> arr{a, b, c};

    sort(arr.begin(), arr.end());
    if (arr[0] == arr[2]) cout << 0 << endl;
    else
    {
        int req = (arr[2]-arr[0]-2)*2;
        if(req > 0) cout << req << endl;
        else cout << 0 <<endl;
    }
}
    
   

signed main()
{
    IOS;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
