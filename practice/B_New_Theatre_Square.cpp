#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i,start,endin,incre) for(int i = start; i < endin; i+= incre)
using namespace std;

int till_2(int x,int a)
{

    rep(i, 1, a, 1)
    {
        
        x *= 2;
    }

    return x;
}

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    int cnt1 = 0;
    int cnt2 = 0;
    while(n--)
    {
        string s;
        cin >> s;
        rep(i,0,m,1) if(s[i] == '.') cnt1++;

        int i = 1;
        while(i < m)
        {
            if(s[i] == s[i-1] && s[i] == '.')
            {
                cnt2++;
                i+=2;
            }
            else i++;
        }        
    }

    //cout << cnt1 << ' ' << cnt2 << endl;

    if(x*2 <= y) cout << cnt1*x << endl;
    else cout << cnt2*y + (cnt1-2*cnt2)*x << endl;
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
