#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    bool flag = 1;
    rep(i, 0, n/2, 1)
    {
        if(s[i] != 'a')
        {
            cout << "YES\n";
            cout << s.substr(0,n-i) + 'a' + s.substr(n-i,i) << endl;
            return;
        }
    }
    reverse(s.begin(), s.end());
    rep(i, 0, n/2, 1)
    {
        if(s[i] != 'a')
        {
            cout << "YES\n";
            string ans = s.substr(0,n-i) + 'a' + s.substr(n-i,i);
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
            return;
        }
    }

    if(n%2 == 1)
    {
        if(s[n/2] != 'a')
        {
            cout << "YES\n";
            cout << s + 'a' << endl;
        } 
        else cout << "NO\n";
        return;
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
