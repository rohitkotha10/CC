#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;


void solve()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int,int>> v(n);
    for(int i = 0;i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    bool flag = 0; 

    int d;
    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            
            if(i != j )
            {
                flag = 1;
                d = abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second);
                //cout << d << endl;
                if ( d > k)
                {
                    flag = 0;
                    break;
                }
            }   
        }
        if(flag)
        {
            cout << 1 << endl;
            return;
        }
        //cout << endl;

    }

    cout << -1 << endl;
    


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
