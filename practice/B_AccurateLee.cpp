/*
author:  rohitkotha10
created: 26.04.2021 19:33:25
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
    int n;
    string arr;
    cin >> n >> arr;

    bool flag = 0;
    int a = 0;
	int b = 0;

    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] == '0')
        {
            a = i;
            break;
        }
    }

    for(int i = 0; i < a; i++)
    {

        if(arr[i] == '1')
        {
            flag = 1;
			b = i;
            break;
        }
    }

    if (flag == 1)
        cout << arr.substr(0, b) + arr.substr(a, arr.size() - a) << endl;
    else
        cout << arr << endl;


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