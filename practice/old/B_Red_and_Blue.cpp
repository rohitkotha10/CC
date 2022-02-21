#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;


void solve()
{
    int n, m;

    cin >> n;
    vector <int> r(n);
    for(int i = 0; i < n; i++) cin >> r[i];

    cin >> m;
    vector <int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];

    int cntr = 0;
    int maxcntr = 0;
    int cntb = 0;
    int maxcntb = 0;

    for(int i = 0; i < n; i++)
    {
        cntr += r[i];
        maxcntr = max(maxcntr, cntr);
    }
    //cout << maxcntr << endl;

    for(int i = 0; i < m; i++)
    {
        cntb += b[i];
        maxcntb = max(maxcntb, cntb);
    }

    cout << maxcntr+maxcntb << endl;

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
