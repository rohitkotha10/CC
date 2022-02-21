#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> cocnt(101,0);
    cocnt[0] = 0;
    rep(i, 0, n-1, 1)
    {
        cin >> arr[i];
        cocnt[arr[i]]++;
    }

    //cout << cocnt[1] <<  endl;

    int sum = 0;
    int cnt = n;
    rep(eq, 1, 100, 1)
    {
        if(cocnt[eq] == 0) continue;
        
        int ans = 0;
        int i = 0;
        while(i < n)
        {
            if(arr[i] == eq)
            {
                i++;
            }
            else
            {
                ans++;
                i += k;
            }
        }
        cnt = min(cnt, ans);
        sum += cocnt[eq];
        if(sum == n) break;
    }
    

    cout << cnt << endl;

    


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
