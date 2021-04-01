#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

bool is_fair(int n)
{
    string eq = to_string(n);
    //cout << eq << endl;
    for(int i = 0; i < eq.length(); i++)
    {
        int dig = eq[i] - '0';
        if(dig != 0 && dig!= 1)
        {
            if(n%dig != 0) return false;
        }
        
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    for(int i = 1; i <= 2520; i++)
    {
        if(is_fair(n))
        {
            cout << n  << endl;
            return;
        }
        else n++;
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
