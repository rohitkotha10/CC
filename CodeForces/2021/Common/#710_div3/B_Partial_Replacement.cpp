#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;//n is length of string

    int cnt = 0;
    bool start = 1;
    int first = 0;
    int last = 0;

    rep(i, 0, n, 1)
    {
        if(s[i] == '*')
        {
            cnt++;
            if(start == 1) first = i;
            start = 0;
        }
    }

    //cout << cnt << endl;

    if(cnt == 1)
    {
        cout << 1 << endl;
        return;
    }

    for(int i = n-1; i >= 0; i--)
    {
        if(s[i] == '*')
        {
            last = i;
            break;
        }
    }
    //cout << last << ' ' << first << endl;
    if( (last-first) <= k)
    {
        cout << 2 << endl;
        return;
    }

    int map = 0;
    int prev = first;
    int cur = first;
    int buffer = 0;
    cnt = 2;

    for(int i = first+1 ; i <= last; i++)
    {
        if(s[i] == '*')
        {
            cur = i;

            if(cur-prev <= k)
            {
                buffer = i;
            }
            else
            {
                cnt++;
                prev = buffer;
                i--;
            }
        }

        
    }


    cout << cnt << endl;
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
