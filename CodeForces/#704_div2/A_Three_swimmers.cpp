#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int closm(int a,int b)
{
    if(a%b==0 && a>=b) return 0;
    if(a<b) return b-a;
    if(a%b!=0 && a>b)
    {
        b=((a/b)+1) * b;
        return b-a;
    }

    return -3;
}

void solve()
{
    int p,a,b,c;
    cin>>p>>a>>b>>c;

    vector<int> v(3);
    v[0]=closm(p,a);
    v[1]=closm(p,b);
    v[2]=closm(p,c);
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    

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
