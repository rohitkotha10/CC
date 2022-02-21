#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    int af = 0;
    int bf = 0;
    int al = 0;
    int bl = 0;

    int cnt = 0;

    for(int i = 0; i < a.length(); i++)
    {
        for(int j = 0; j < b.length(); j++)
        {
            if(a[i] == b[j])
            {
                af = i;
                bf = j;
            }
        }
    }

    for(int i = a.length()-1; i >= 0; i--)
    {
        for(int j = b.length()-1; j >= 0 ; j--)
        {
            if(a[i] == b[j])
            {
                al = i;
                bl = j;
            }
        }
    }

    if(a.substr(af,al-af+1) == b.substr(bf,bl-bf+1))
    {
        cout << af+bf+a.length()-al-1+b.length()-bl-1;
        return;
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
