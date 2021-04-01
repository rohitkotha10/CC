#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i,start,endin,incre) for(int i = start; i < endin; i+= incre)
using namespace std;

int till_2(int x,int a)
{

    rep(i, 1, a, 1)
    {
        
        x *= 2;
    }

    return x;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    if(a > b) swap(a,b);

    int cnt = 0;
    vector<int> sol;
    sol.push_back(a);
    int psh = a;
    while(true)
    {
        psh *= 2;
        sol.push_back(psh);
        if(psh > b) break;
    }
    int ans = -1;
    rep(i,0,sol.size(),1)
    {
        if(sol[i] == b)
        {
            ans = i;
            break;
        }
    }

    if(ans == -1) cout << ans << endl;
    else if(a == b) cout << 0 << endl;
    else cout << (ans-1)/3 + 1 << endl;


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
