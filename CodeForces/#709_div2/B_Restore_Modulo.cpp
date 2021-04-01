#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;
//finally copied samadeol solution, sol credits samarth arora XD
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int flag = 1;

    if(n <= 2 )
    {
        cout << 0 << endl;
        return;
    }
    for(int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1])
        {
            sort(arr.begin(),arr.end());
            if(arr[0] == arr[n-1])
            {
                cout << 0 << endl;
                return;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }

    int diff = arr[1] - arr[0];
    int curr = arr[2] - arr[1];

    int m = -1;
    int c = 0;

    for(int i = 2; i < n; i++)
    {
        curr = arr[i] - arr[i-1];
        if(curr*diff < 0)
        {
            flag = 2;
            m = abs(diff) + abs(curr);
            c = max(diff,curr);
            break;
        }
    }

    if(flag == 1)
    {
        for(int i = 2; i < n; i++)
        {
            if(arr[i] - arr[i-1] != diff)
            {
               flag = 0;
               break;
            }
        }

        if(flag == 1) cout << 0 << endl;
        else cout << -1 << endl;
    }

    else
    {  
        if(arr[0] >= m)
        {
            cout << -1 << endl;
            return;
    
        }
        for(int i = 1; i < n; i++)
        {
            if(arr[i] != (arr[i-1]+c)%m )
            {
               flag = 0;
               break;
            }
        }
        if(flag == 2) cout << m << ' ' << c << endl;
        else cout << -1 << endl;
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
