/*
author:  rohitkotha10
created: 25.04.2021 09:25:58
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//sol: neal wu
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    int in = n - 1;
    while(in > 0 && arr[in] <= arr[in - 1]) in--;
    while(in > 0 && arr[in] >= arr[in - 1]) in--;
    cout << in << endl;

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



