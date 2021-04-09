#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

int max_c(int a, int b)
{
    if(a > b) return a;
    return b;
}
void solve()
{
    int n;
    cin >> n;

    int mn = n;

    //x * y ==> x + y - 2 to increment to x and make y copies, lhs value, rhs moves

    for(int x = max_c(0, sqrt(n) - 5); x <= sqrt(n) + 5 ; x++ )
    {
        for( int y = max_c(0, sqrt(n) - 5); y <= sqrt(n) + 5; y++)
        {
            if(x * y >= n) mn = min(mn, x + y - 2);
        }
    }

    cout << mn << endl;
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
