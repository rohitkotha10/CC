#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;


int sol(int& ans, int n, int& m)
{
    
}

int getdig(int a)
{
    int cnt = 0;
    while(a > 0)
    {
        cnt++;
        a = a/10;
    }
    return cnt;
}
void solve()
{
    int n, m;
    cin >> n >> m;


    int cop = n;
    vector<int> arr;
    int ans = 0;
    while(cop > 0)
    {
        arr.push_back(cop%10);
        cop /= 10;
    }

    rep(i, 0, arr.size() - 1, 1)
    {
        arr[i] += m;
        if(arr[i] > 10)
        {
            int mcop = m;
            while(mcop > 0)
            {
                arr[i] -= mcop;
                mcop -= 10 - arr[i];
                arr[i] = 10;
            }
        }
        else ans += getdig(arr[i]);
    }

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
