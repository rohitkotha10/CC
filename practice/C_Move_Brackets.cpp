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
    string s;
    cin >> s;
    int cnt = 0;
    int ans = 0;
    int fro = 0;
    rep(i, 0, n, 1)
    {
        if(s[i] == '(') fro++;
    }
    rep(i, 0, s.length() ,1)
    {
        if(s[i] == '(') cnt++;
        if(s[i] == ')') cnt--;

        if(cnt < 0)
        {
            ans++;
            s.push_back(')');
            cnt = 0;
        }
    }

    ans += cnt;
    cout << min(ans, n-ans) << endl;
    

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
