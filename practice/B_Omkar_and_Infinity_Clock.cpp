#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];


    int max_arr=arr[0];
    int min_arr=arr[0];
    for(int i=0;i<n;i++)
    {
        max_arr=max(max_arr,arr[i]);
        min_arr=min(min_arr,arr[i]);
    }

    if(k%2==1)
    {
        for(int i=0;i<n;i++)
        {
            cout<<max_arr-arr[i]<<' ';
        }
        cout<<endl;
    }

    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]-min_arr<<' ';
        }
        cout<<endl;
    }
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
