#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;


void solve()
{
    int n;
    cin >> n;

    if(n == 2)
    {
        cout << 2 << endl;
        cout << 1 << ' ' << 2 << endl;
        return;
    }

    cout << 2 << endl;
    cout << n-2 << ' ' << n << endl;
    cout << n-1 << ' ' << n-1 << endl;
    for(int i = n-1; i >=3; i--)
    {
        cout << i << ' ' << i-2 << endl;
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
