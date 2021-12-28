#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iterator>
#include <random>
#include <iomanip>
#include <map>
#include <utility>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

void solve()
{
    int a,b;
    int cnt=0;
    cin>>a>>b;
    if(a<b) cout<<1<<endl;
    else if(a==b) cout<<2<<endl;
    else if(a>b)
    {
        if(b==1)
        {
            cnt++;
            b++;
        }
        while((log(a)/log(b))-(log(a)/log(b+1))>1.0)
        {
            b++;
            cnt++;
        }
        while(a>0)
        {
            a=floor(double(a)/double(b));
            cnt++;
        }
        cout<<cnt<<endl;
    }
    
    
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
