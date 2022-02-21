#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;


void solve()
{
    int n;
    cin >> n;
    set<int> arr;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.insert(val);
    }
    if(arr.size() != n) cout << "YES" << endl;
    else cout << "NO" << endl;

    
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
