#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int cnt0 = 0, cnt1 = 0;
    rep(i, 0, n, 1)
    {
        if(a[i] == '0') cnt0++;
        if(a[i] == '1') cnt1++;
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    bool flip = 0;

    rep(i, 0 , n, 1)
    {
        if( (flip == 0 && a[i] == b[i]) || (flip == 1 && a[i] != b[i])  )
        {
            if(flip == 1)
            {
                if(a[i] == '0') cnt1--;
                if(a[i] == '1') cnt0--;
            }
            else
            {
                if(a[i] == '0') cnt0--;
                if(a[i] == '1') cnt1--;
            }
        }
        else
        {
            if(cnt0 == cnt1)
            {
                flip = 1-flip;
                swap(cnt0, cnt1);
                if(flip == 1)
                {
                    if(a[i] == '0') cnt1--;
                    if(a[i] == '1') cnt0--;
                }
                else
                {
                    if(a[i] == '0') cnt0--;
                    if(a[i] == '1') cnt1--;
                }
            }
            else
            {
                cout << "NO\n";
                return;
            }   
        }
        if(cnt1 == cnt0 && cnt0 == 0)
        {
            cout <<"YES\n";
            return;
        }
    }
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
