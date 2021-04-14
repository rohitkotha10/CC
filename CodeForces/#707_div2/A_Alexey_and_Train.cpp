#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i = 0; i < n;i++)
    {
        cin >> a[i] >> b[i];
    }
    vector<int> tm(n);
    for(int i = 0; i < n;i++) cin >> tm[i];


    int curtime = a[0] + tm[0];

    for(int i = 0; i < n-1;i++)
    {
        int travtime = a[i+1]-b[i]+tm[i+1];
        int c1 = b[i]-a[i];
        if(c1%2 == 0) c1 = c1/2;
        else c1 = (c1/2) + 1;

        if(b[i] - curtime >= c1)
        {
            curtime = b[i];
        }

        else
        {
            curtime = curtime + c1;
        }

        if( curtime < b[i] ) curtime = b[i];

        //cout << i+1 << ' ' << curtime << endl;

        curtime += travtime;
    }

    cout << curtime << endl;


}

   

signed main()
{
    IOS;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
