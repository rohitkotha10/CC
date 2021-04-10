#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;


void solve()
{
    int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    int ans = a * b;
    int n1 = n;
    int a1 = a;
    int b1 = b;

    n1 = n - (a - max(a - n, x));
    a1 = max(a - n, x);
    b1 = max(b - n1, y);

    ans = min(ans, a1 * b1);

    int n2 = n;
    int a2 = a;
    int b2 = b;

    n2 = n - (b - max(b - n, y));
    b2 = max(b - n, y);
    a2 = max(a - n2, x);
    ans = min(ans, a2 * b2);

    cout << ans << endl;


    
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
