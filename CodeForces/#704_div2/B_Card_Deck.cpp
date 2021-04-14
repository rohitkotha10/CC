#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int card_max(vector<int> v)
{
    sort(v.rbegin(),v.rend());
    return v[0];
}


void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];


    vector<int> s(n);
    s=v;
    sort(s.rbegin(),s.rend());

    vector<int> p;

    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            if(s[k]==v[i])
            {
                for(int j=i;j<n;j++)
                if(v[j]==0) break;
                else
                {
                    p.push_back(v[j]);
                    v[j]=0;
                }
            }
        }
        
    }

    for(int i=0;i<n;i++) cout<<p[i]<<' ';
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
