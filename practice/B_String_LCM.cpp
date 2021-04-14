#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a,int b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    string s, t;
    cin >> s >> t;
    int req = lcm(s.length(),t.length());

    while(s.length() < req) s += s;
    while(t.length() < req) t += t; 

    s = s.substr(0,req);
    t = t.substr(0,req);

    if(s != t)
    {
        cout << -1 <<endl;
        return;
    }

    cout << s <<endl;

}
   

signed main()
{
    IOS;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
