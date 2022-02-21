#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> sol(n);

    for(int i=0;i<n;i++) sol[i]=0;

    sol[0]=arr[0];
    int maxval = sol[0];

    for(int i = 1; i < n; i++)
    {
        maxval = max(maxval,sol[i-1]);
        //cout<<maxval<<endl;
        sol[i]=arr[i]+maxval;
    }

    for(int i=0;i<n;i++) cout<<sol[i]<<' ';
    cout<<endl;
}
    
   

signed main()
{
    IOS;
    solve();
}
