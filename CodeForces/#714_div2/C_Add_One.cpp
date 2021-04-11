#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

int getD(int n)
{
    int a = 0;
    while(n > 0)
    {
        a++;
        n /= 10;
    }
    return a;
};

int f(int n, int m)
{
    int cnt = 0;
    if(n != 9) return f(n + 1, m - 1);
    if(n == 9) return f(0, m - 1) + f(1, m - 1);
    if(m == 0)
    {
        if(n == 10) return 2;
        else return 1;
    }
    return 0;
};

void solve()
{
    int n, m;
    cin >> n >> m;
    cout << f(1, 2) << endl;
    
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
