#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int r, g, bb;
    cin >> r >> g >> bb;

    vector<int> arr{r, g, bb};
    sort(arr.begin(),arr.end());

    int a, b, c;

    a = arr[0];
    b = arr[1];
    c = arr[2];

    if(c-b <= a+1) cout << "Yes" << endl;
    else cout << "No" << endl;
    
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
