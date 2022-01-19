#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 2);
    int len = n + 2; 
    rep(i, 0, len - 1, 1) cin >> arr[i];

    sort(arr.begin(), arr.end());
    int max = arr[len - 1];

    int sum = 0;
    rep(i, 0, len - 2, 1)
    {
        sum += arr[i];
    }

    bool flag = 0;
    int map = 0;

    rep(i, 0, len - 2, 1)
    {
        if(sum - arr[i] == max)
        {
            flag = 1;
            map = i;
            break;
        }
    }

    if (flag == 1)
    {
        rep(i, 0, len - 2, 1)
        {
            if(i == map) continue;
            cout << arr[i] << ' ';
        }
        cout << endl;
        return;
    }

    max = arr[len - 2];
    
    sum -= arr[len - 2];
    if(sum == max)
    {
        rep(i, 0, len - 3, 1) cout << arr[i] << ' ';
        cout << endl;
        return;
    }

    cout << -1 << endl;



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
