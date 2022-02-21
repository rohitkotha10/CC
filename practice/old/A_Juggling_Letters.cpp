#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    bool flag=1;
    string master;

    for(int i=0;i<n;i++)
    {
        master+=arr[i];
    }

    sort(master.begin(),master.end());

    int cnt=1;

    //cout<<"MAS: "<<master<<endl;
    for(int i=1;i<master.length();i++)
    {
        if(master[i]==master[i-1])
        {
            cnt++;
        }

        if(master[i]!=master[i-1])
        {
            if(cnt%n!=0)
            {
                flag=0;
                break;
            }
            if(i!=master.length()-1) cnt=1;;
            
        }
    }

    if(cnt%n!=0)  flag=0;

    if(master.length()%n!=0) flag=0;


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
}
