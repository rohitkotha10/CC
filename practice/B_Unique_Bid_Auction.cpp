#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    bool flag=0;
    vector<int> res(n);

    for(int i=0;i<n;i++) res[i]=v[i];


    sort(res.begin(),res.end());
    int min=-1;

    if(res[0]!=res[1]) min=res[0];
    else
    {
        for(int i=1;i<n-1;i++)
        {
            if(res[i]!=res[i+1] && res[i]!=res[i-1] )
            {
                min=res[i];
                break;
            }
        }
    }
    if(min==-1 && res[n-1] != res[n-2]) min=res[n-1];

    for(int i=0;i<n;i++)
    {
        if(v[i]==min)
        {
            cout<<i+1<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0) cout<<-1<<endl;


}
    
   

int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
