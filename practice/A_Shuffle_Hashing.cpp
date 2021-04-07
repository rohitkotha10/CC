#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    string p, h;
    cin >> p >> h;
    sort(p.begin(), p.end());
    int len = p.length();
    int hash = h.length();

    rep(i, 0, hash - 1, 1)
    {
        if(i + len > hash) break;
        string check = h.substr(i, len);
        sort(check.begin(), check.end());
        if(check == p)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
    
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
