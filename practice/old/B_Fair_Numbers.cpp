#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;


void solve()
{
    string s;
    cin >> s;
    int num = 0;
    for(int i = 0; i < s.length(); i++)
    {
        int dig = s[i] - '0';
        num += dig*pow(10,s.length()-i-1);
    }

    bool flag = 1;

    while(true)
    {
        for(int i = 0; i < s.length(); i++)
        {
            int dig = s[i] - '0';
            num += dig*pow(10,s.length()-i-1);
        }
        for(int i = 0;i < s.length(); i++)
        {
            int d = s[i] -'0';
            if(num%d != 0)
            {
                flag = 0;
                num++;
                break;
            }
        }

        if(flag == 1)
        {
            cout << num << endl;
            return;
        }

        flag = 1;
    }
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
