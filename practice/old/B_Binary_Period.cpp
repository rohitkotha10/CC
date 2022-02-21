/*
author:  rohitkotha10
created: 14.04.2021 22:54:23
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
    string s;
    cin >> s;

    int n = s.length();

    int cnt1 = 0;
    int cnt0 = 0;

    rep(i, 0, n - 1, 1)
    {
        if(s[i] == '1') cnt1++;
        else cnt0++;
    }

    if(cnt0 == 0 || cnt1 == 0) 
    {
        cout << s << endl;
        return;
    }


    string add = "10";
    if(s[0] == '0') add = "01";
    string ans;
    int req = max(cnt0, cnt1);
    int cnt = 0;
    while(cnt < 2*n)
    {
        ans += add;
        cnt++;
    }
    cout << ans.substr(0,2*n) << endl;

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






/*
0
1
00
01
10
11
000
001
010
011
100
101
110
111
0000
0001
0010
0011
0100
0101
0110
0111
1000
1001
1010
1011
1100
1101
*/