#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i,start,endin,incre) for(int i = start; i < endin; i+= incre)
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if(n == 1)
    {
        cout << 8 << endl;
        return;
    }

    string s = "";
    
    {
        int k = (n-1)/4;
        k++;
        rep(i,0,n-k,1)
        {
            s += "9";
        }
        rep(i,0,k,1)
        {
            s += "8";
        }
    }
    cout << s << endl;
    

}
   

signed main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
