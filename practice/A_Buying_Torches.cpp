#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;


void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int num = k*(y+1) - 1;
    if(num%(x-1) == 0) num = num/(x-1);
    else num = (num/(x-1)) + 1;
    num += k;
    cout << num << endl;



    
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
