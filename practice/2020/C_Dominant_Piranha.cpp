#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    vector<int> vcopy(n);
    vcopy=v;
    sort(vcopy.begin(),vcopy.end());

    int max=vcopy[n-1];

    if(vcopy[0]==vcopy[n-1]) cout<<-1<<endl;
    else if(v[n-1]==max && vcopy[n-1]!=vcopy[n-2]) cout<<n<<endl;
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==max)
            {
                if(v[i+1]==max)
                {
                    if(v[i-1]<v[i] && i!=0)
                    {
                         cout<<i+1<<endl;
                         break;
                    }
                    else continue;
                }
                {
                    cout<<i+1<<endl;
                    break;
                }
            }


        }


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
