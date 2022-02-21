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

    bool flag=1;
    sort(arr.begin(),arr.end());
    int min = arr[0];
    for(int i=0;i<n;i++) arr[i]=arr[i]-min;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            flag=0;
            break;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
    //solve();
}
