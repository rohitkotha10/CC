#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;


int modFact(int n, int p)
{
    if (n >= p)
        return 0;
 
    int result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n- 1, 1) cin >> arr[i];

    sort(arr.begin(), arr.end());

    if(arr[0] == arr[n-1])
    {
        cout << modFact(n, 1e9+7) << endl;
        return;
    }
    int cnt0 = 0;
    int cnt1 = 0;

    rep(i, 0, n-1, 1)
    {
        if(arr[i] == 0) cnt0++;
        if(arr[i] == 1) cnt1++;
    }

    if( ( cnt1 == 0 && cnt1 == 1 ) ||  ( cnt1 == 1 && cnt0 == 0 ) )
    {
        cout << 0 << endl;
        return;
    }

    if(cnt0 >= 2)
    {
        int rem = 1e9 + 7;
        int ans = modFact(n-2, rem);
        ans *= ( cnt0 * (cnt0-1) ) % rem;
        ans = ans % rem;
        cout << ans << endl;
        return;
    }

    if(cnt0 == 0)
    {
        rep(i, 1, n-1, 1)
        {
            if( (arr[i] & 1 ) == 0)
            {
                cout << 0 << endl;
                return;
            }
        }

        int rem = 1e9 + 7;
        int ans = modFact(n-2, rem);
        ans *= ( cnt1 * (cnt1-1) ) % rem;
        ans = ans % rem;
        cout << ans << endl;
        return;
        

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
