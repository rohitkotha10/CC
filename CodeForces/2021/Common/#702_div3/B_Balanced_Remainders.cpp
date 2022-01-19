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

    int cnt0=0;
    int cnt1=0;
    int cnt2=0;

    for(int i=0;i<n;i++)
    {
        if(v[i]%3==0) cnt0++;
        if(v[i]%3==1) cnt1++;
        if(v[i]%3==2) cnt2++;
    }

    int a,b,c;
    a=abs(cnt0-cnt1);
    b=abs(cnt0-cnt2);
    c=abs(cnt1-cnt2);

    vector<int> m(3);
    m[0]=a;
    m[1]=b;
    m[2]=c;
    sort(m.begin(),m.end());
    int diff=m[2]-m[0];
    if(diff==0) cout<<0<<endl;
    if(diff%2==0 && diff!=0) cout<<diff+1<<endl;
    if(diff%2==1) cout<<diff<<endl;




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
