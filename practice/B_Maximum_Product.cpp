/*
author:  rohitkotha10
created: 24.04.2021 19:35:42
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool comp(const int& a, const int& b) { return abs(a) < abs(b); };
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    sort(arr.begin(), arr.end(), comp);
    reverse(arr.begin(), arr.end());

    bool flag = 0;
    
    //for(int i : arr) cout << i << ' ';
    //cout << endl;
    
    int ans = 1;
    ans  = arr[0] * arr[1] * arr[2] * arr[3] * arr[4];


    if(n == 5 || ans >= 0)
    {
        cout << ans << endl;
        return;
    }

    int copy = ans;
    for(int k = 4; k >= 0; k--)
    {
        rep(i, 5, n - 1, 1)
        {
            int temp = ans;
            temp /= arr[k];
            temp *= arr[i];
            //cout << i << ' ' << k << ' ' << copy << endl;
            copy = max(copy, temp);

        }
    }
    ans = copy;
    ans = max(ans, arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[n - 4] * arr[n - 5]);

    cout << ans << endl;
}
   

signed main()
{
    IOS;
    int sum = 0;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
