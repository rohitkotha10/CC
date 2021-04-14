#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

bool is_2pow(int n)
{
    for(int i=1;i<n;i++)
    {
        if(pow(2,i)==n) return true;
    }
    return false;

};

void solve()
{
    int n;
    cin>>n;
    for(int i=4*n-2;i>=2*n;i-=2)
    {
        cout<<i<<' ';
    }
    cout<<endl;
    
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
