#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> sol(n+1,0);
    int ans =0;
    for(int i=0;i<n;i++)
    {
        if(i+arr[i]>n)
        {
            sol[n]+=i+arr[i]-n;
        }
        if(sol[i]>arr[i]-1)
        {
            sol[i+1]+=sol[i]-arr[i]+1;
        }
        for(int x=min(i+arr[i],n);x>i+1;x--)
        {
            sol[x]++;
        }
    }
    cout<<sol[n]<<endl;
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