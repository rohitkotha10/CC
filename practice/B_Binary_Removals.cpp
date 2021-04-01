#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    string arr;
    cin >> arr;

    int n = arr.length();
    
    int flag = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1] && arr[i] == '1')
        {
            for(int j = i+1; j < n; j++)
            {
                if(arr[j] == arr[j-1] && arr[j] == '0')
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            break;
        }
    }

    cout << "YES" << endl;
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
