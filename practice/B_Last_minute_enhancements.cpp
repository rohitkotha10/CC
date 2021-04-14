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

    int cnt=1;//for the 1st case;

    for(int i=1;i<n-1;i++)
    {
        if(v[i]!=v[i-1]) cnt++;//counting unique
        if (v[i]!=v[i+1] && v[i-1]==v[i])// like 1 2 (2) 3  in this case number 3rd pos
        {
            v[i]++;
            cnt++;
        }
    }

    if(n!=1) cnt++;


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
