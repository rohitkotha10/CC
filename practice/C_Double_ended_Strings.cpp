#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    int ans = 0;

    rep(i, 0, a.length()-1, 1)
    {
        rep(j, 0, b.length()-1, 1)
        {
            if(a[i] == b[j])
            {
                for(int len = min(a.length()-i, b.length()-j); len > 0; len--)
                {
                    if(a.substr(i,len) == b.substr(j,len))
                    {
                        ans = max(ans, len);
                        break;
                    }
                }
                
            }

        }
    }
    cout << a.length() + b.length() - ans - ans << endl;
    
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
