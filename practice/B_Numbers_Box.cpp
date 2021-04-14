#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int val;
            cin >> val;
            arr[i].push_back(val);
        }
    }

    int cnt = 0;
    int sum = 0;
    int minval = abs(arr[0][0]);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
           if (arr[i][j] < 0)
           {
               cnt++;
           }
           sum += abs(arr[i][j]);
           minval = min(minval, abs(arr[i][j]));
        }
    }

    if (cnt%2 == 0) cout << sum << endl;
    else cout << sum - minval*2 << endl;
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
