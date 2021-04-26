/*
author:  rohitkotha10
created: 26.04.2021 20:04:08
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    int sum = 0;
    rep(i, 0, n - 1, 1)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int sumold = sum;

    if((sum % x) != 0) cout << n << endl;
    else
    {
        bool flag = 0;
        int min1 = 0;
        int min2 = 0;
        rep(i, 0, n - 1, 1)
        {
            sum -= arr[i];
            if((sum % x) != 0)
            {
                flag = 1;
                min1 = n - i - 1;
                break;
            }
        }

        reverse(arr.begin(), arr.end());
        sum = sumold;

        rep(i, 0, n - 1, 1)
        {
            sum -= arr[i];
            if((sum % x) != 0)
            {
                flag = 1;
                min2 = n - i - 1 ;
                break;
            }
        }
        if(flag == 0)
            cout << -1 << endl;
        else
            cout << max(min1, min2) << endl;
    }

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