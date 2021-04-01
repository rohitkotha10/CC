#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> sol(m,0);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sol[arr[i]%m]++;
    }

    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if(m == 1)
    {
        cout << n << endl;
        return;
    }
    
    int cnt = 0;
    if(sol[0] != 0) cnt++;
    if(m%2 == 0 && sol[m/2] != 0) cnt++;

    for(int i = 1 ; i < (m+1)/2; i++)
    {
        if(sol[i] == 0 || sol[m-i] == 0) cnt += max(sol[i],sol[n-1-i]);
        else if(sol[i] == sol[m-i]) cnt +=1;
        else cnt += abs(sol[i] - sol[m-1]);
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
