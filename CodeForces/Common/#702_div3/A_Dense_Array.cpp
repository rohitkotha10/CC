#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int cnt=0;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    for(int i=0;i<n-1;i++)
    {
        int a=v[i];
        int b=v[i+1];
        int maxv=max(a,b);
        int minv=min(a,b);
        if(double(maxv)/double(minv)<=2)
        {
            continue;
        }
        else
        {
            while(double(maxv)/double(minv)>2)
            {
                minv*=2;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
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
