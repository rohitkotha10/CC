/*
author:  rohitkotha10
created: 20.05.2021 19:06:52
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//no test
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1)
        cin >> arr[i];
    vector<int> copy = arr;

    int cnt = 0;
    
    rep(i, 0, n - 1, 1)
    {
        int ans = -1;
        int ind = 0;
        if (arr[i] == 1)
        {
            arr[i] = 2;
            for (int j = i; j <= n - 1; j++)
            {
                if (arr[j] == 0)
                {
                    //cout << "HERE" << endl;
                    ans = j - i;
                    ind = j;
                    break;
                }
            }

            for (int j = i; j >= 0; j--)
            {
                if (arr[j] == 0)
                {
                    if ((i - j) <= ans || ans == -1)
                    {
                        //cout << "HEREmin" << endl; 
                        ans = i - j;
                        ind = j;
                        break;
                    }
                }
            }

            //cout << ans << endl;

            cnt += ans;
            arr[ind] = 2;
        }
    }

    int cnt1 = 0;

    arr = copy;
    reverse(arr.begin(), arr.end());
    rep(i, 0, n - 1, 1)
    {
        int ans = -1;
        int ind = 0;
        if (arr[i] == 1)
        {
            arr[i] = 2;
            for (int j = i; j <= n - 1; j++)
            {
                if (arr[j] == 0)
                {
                    //cout << "HERE" << endl;
                    ans = j - i;
                    ind = j;
                    break;
                }
            }

            for (int j = i; j >= 0; j--)
            {
                if (arr[j] == 0)
                {
                    if ((i - j) <= ans || ans == -1)
                    {
                        //cout << "HEREmin" << endl; 
                        ans = i - j;
                        ind = j;
                        break;
                    }
                }
            }

            //cout << ans << endl;

            cnt1 += ans;
            arr[ind] = 2;
        }
    }

    cout << min(cnt, cnt1) << endl;
}

signed main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}
