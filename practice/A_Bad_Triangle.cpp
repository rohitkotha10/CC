#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int amap=1;
    int bmap=1;
    int cmap=1;

    bool flag=1;
    int min_arr=arr[0];
    int max_arr=arr[0];
    for(int i=0;i<n;i++)
    {
        min_arr=min(min_arr,arr[i]);
        if(min_arr==arr[i]) amap=i+1;
        max_arr=max(max_arr,arr[i]);
        if(max_arr==arr[i]) cmap=i+1;
    }

    //cout<<max_arr<<endl<<min_arr<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=max_arr-min_arr && i+1!=amap && i+1!=cmap)
        {
            flag=0;
            bmap=i+1;
            break;
        }
    }

    if(flag) cout<<-1<<endl;
    else
    {
        vector<int> v(3);
        v[0]=amap;
        v[1]=bmap;
        v[2]=cmap;
        sort(v.begin(),v.end());

        for(int i=0;i<3;i++) cout<<v[i]<<' ';
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
