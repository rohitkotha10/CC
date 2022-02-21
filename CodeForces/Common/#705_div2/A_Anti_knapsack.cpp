#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int cnt=0;
    vector<int> v;

    for(int i=n;i>k;i--)
    {
        cnt++;
        v.push_back(i);
    }

    if(k%2==1)
    {
        for(int i=k-1;i>(double(k-1)/2.0);i--)
        {
            cnt++;
            v.push_back(i);
        }
    }
    else
    {
        for(int i=k-1;i>=k/2;i--)
        {
            cnt++;
            v.push_back(i);
        }

    }
    cout<<cnt<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<' ';
    cout<<endl;
    
    



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
