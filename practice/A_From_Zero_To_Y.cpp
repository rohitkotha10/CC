#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

int clos(int x, int p)
{
    while(x < p)
    {
        if(x*10 > p)
        {
            break;
        }
        x *= 10;
    }

    return x;
}

void solve()
{
    int x, y;
    cin >> x >> y;
    
    int k = 0;
    int cnt = 0;

    while(k < y)
    {
        if(k+clos(x,y-k) > y)
        {
            break;
        }
        k += clos(x,y-k);
        cnt++;
    }

    cnt += y-k;
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
