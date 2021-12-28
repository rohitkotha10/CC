#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;


void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    int cnt = 0;
    int buffer = 0;

    if(s.length()%2 == 1)
    {
        cout << "NO" <<endl;
        return;
    }

    if(s[0] == ')' || s[n-1] == '(')
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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
