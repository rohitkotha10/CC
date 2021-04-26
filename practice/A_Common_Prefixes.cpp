/*
author:  rohitkotha10
created: 25.04.2021 09:25:58
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//had problem when arr[i] < arr[i - 1] and when arr[i] was 0, hence function change was created
void change(string& s, int prev)
{
    s = s.substr(0, prev) + s.substr(prev + 1, s.size() - prev - 1) + s[prev];
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];
    string s = "abcdefghijklmnopqrstuvwxyz";
    while(s.length() < 300)
    {
        s += s;
    }

    
    if(arr[0] == 0)
    {
        cout << s.substr(0, 1) << endl;
        change(s, 0);
    }
    else
        cout << s.substr(0, arr[0]) << endl;
    
    rep(i, 1, n - 1, 1)
    {
        if(arr[i] < arr[i - 1] || arr[i] == 0)
        {
            cout << s.substr(0, max(1LL, arr[i - 1])) << endl;
            change(s, arr[i]);
        }
        
        else if (arr[i] >= arr[i - 1])
        {
            cout << s.substr(0, arr[i]) << endl;
        }
        
    }
    cout << s.substr(0, max(1LL, arr[n - 1])) << endl;

    //cout << endl;
}
   

signed main()
{
    IOS;
    int sum = 0;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}