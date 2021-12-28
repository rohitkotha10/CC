#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    vector<int> arr;

    for(int i=0;i<3;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    int cnt=0;

    for(int i=0;i<3;i++)
    {
        if(arr[i])
        {
            cnt++;
            arr[i]--;
        }
    }

    sort(arr.begin(),arr.end());

    if(arr[1] && arr[2])
    {
        cnt++;
        arr[1]--;
        arr[2]--;
    }
    if(arr[0] && arr[1])
    {
        cnt++;
        arr[0]--;
        arr[1]--;
    }
    if(arr[0] && arr[2])
    {
        cnt++;
        arr[0]--;
        arr[2]--;
    }

    if(arr[0] && arr[1] && arr[2])
    {
        cnt++;
    }

    cout<<cnt<<endl;

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
