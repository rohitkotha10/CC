#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    vector<char> arr(m);
    for(int i=n;i>=2;i--)
    {
        for(int i=0;i<m;i++) cin>>arr[i];
        if(arr[m-1]=='R') cnt++;
    }

    for(int i=0;i<m-1;i++)
    {
        cin>>arr[i];
        if(arr[i]=='D') cnt++;
    }
    cin>>arr[m-1];

    cout<<cnt<<endl;

}
    
   

signed main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
