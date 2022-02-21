#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;



bool is_odd(char a)
{
    if(a == '1') return true;
    if(a == '3') return true;
    if(a == '5') return true;
    if(a == '7') return true;
    if(a == '9') return true;
    return false;
}


void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int maplast = n-1;
    int mapfirst = -1;

    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(is_odd(s[i]))
        {
            cnt++;
            maplast = i;
        }
    }

    for(int i = 0; i < maplast; i++)
    {
        if(is_odd(s[i]))
        {
            mapfirst = i;
        }
    }


    string snew;

    for(int i = 0; i < maplast + 1; i++)
    {
        snew.push_back(s[i]);
    }

    s=snew;
    n=s.length();

    if(cnt%2==0 && is_odd(s[n-1]))
    {
        cout << s <<endl;
    }

    else
    {
        if(s.length() == 1 || mapfirst == -1) cout << -1 << endl;
        else
        {
            string sns;
            for(int i = 0; i < mapfirst + 1; i++)
            {
                sns.push_back(s[i]);
            }
            s=sns;
            cout << s << endl;
        }
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
