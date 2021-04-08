#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;
//solution: yash ratnani.
void solve()
{
    string s;
    cin >> s;

    int cnt = 0;
    rep(i, 0, s.length() - 1, 1)
    {
        if(cnt && s[i] == 'B') cnt--;
        else cnt++;
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
