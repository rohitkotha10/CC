#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i < endin; i += incre)
using namespace std;

int log2(int a)
{
    int x = 1;
    if(a == 1) return 0;
    rep(i,1,31,1)
    {
        x = x*2;
        if(x == a) return i;
    }
    return -1;
};

int pow2(int a)
{
    if(a == 0) return 1;
    int x = 1;
    for(int i = 1; i <= a; i++)
    {
        x *= 2;
    }
    return x;
};

void solve()
{
    int n,w;
    cin >> n >> w;
    vector<int> arr(n);
    vector<int> sol(31);//from 2^0 to 2^30
    rep(i, 0, n, 1)
    {
        cin >> arr[i];
        int add = log2(arr[i]);
        sol[add]++;
    }

    int sum = 0;
    int ans = 0;
    int map = n-1;

    rep(i, 0, n, 1)
    {
        for(int i = 30; i >= 0; i--)
        {
            if(sol[i] == 0) continue;
            sum = pow2(i);
            sol[i]--;

            for(int j = i; j >= 0; j--)
            {
                if(sol[j] == 0) continue;
                sum += pow2(j);
                if(sum > w)
                {
                    sum -= pow2(i);
                    continue;
                }
                sol[j]--;
            }
            ans++;
        }
    }

    //if(ans == 0) ans = 1;

    cout << ans << endl;


    
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
