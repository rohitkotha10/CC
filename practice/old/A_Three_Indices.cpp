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

    bool flag=0;
    int a=0,b=0,c=0;

    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1])
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    a=i;
                    b=i+1;
                    c=j+1;
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
    }

    if(flag)
    {
        cout<<"YES"<<endl;
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
    
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
}
