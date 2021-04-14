#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    set<int> arr;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        arr.insert(val);
    }

    //for(auto x: arr) cout<<x<<' ';
    //cout<<endl;

    int curr=1;
    int xinit=x;
    int i=1;

    while(x>=0)
    {
        if(arr.count(i)==1)
        {
            curr=i;
            i++;
            continue; 
        }

        if(x==0) break;

        if(arr.count(i)==0 && x>0)
        {
            x--;
            curr=i;
        }
        i++;
    }

    cout<<curr<<endl;

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
