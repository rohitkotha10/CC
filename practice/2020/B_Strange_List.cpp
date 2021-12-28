#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

struct Token
{
    int val;
    int tim;
};
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<Token> arr(n);
    rep(i, 0, n-1, 1)
    {
        cin >> arr[i].val;
        arr[i].tim = 1;
    }

    int i = 0;
    while(true)
    {
        if(arr[i].val%x != 0) break;
        Token add;
        add.val = arr[i].val/x;
        add.tim = x*arr[i].tim;
        arr.push_back(add);
        i++;
    }
    int sum = 0;


    // rep(i, 0, arr.size()-1, 1) cout << arr[i].tim << ' ';
    // cout << endl;
    // rep(i, 0, arr.size()-1, 1) cout << arr[i].val << ' ';
    // cout << endl;
    rep(i, 0, arr.size()-1, 1)
    {
        sum += arr[i].tim * arr[i].val;
    }

    cout << sum << endl;

    
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
