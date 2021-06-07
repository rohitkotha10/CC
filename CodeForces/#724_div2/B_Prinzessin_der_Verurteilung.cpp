/*
author:  rohitkotha10
created: 06.06.2021 20:43:01
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

vector<string> vals;
void solve()
{
    int n;
    cin >> n;
    string arr;
    cin >> arr;
    set<char> s;
    rep(i, 0, n - 1, 1)
    {
        char ch = arr[i];
        s.insert(ch);
    }

    if (s.size() < 26)
    {
        rep(i, 97, 122, 1)
        {
            char check = i;
            if (s.count(check) == 0)
            {
                cout << check << endl;
                return;
            }
        }
    }

    else
    {
        for (int j = 0; j <= 675; j++)
        {
            bool flag = 1;
            for (int i = 0; i <= n - 2; i++)
            {
                if (arr.substr(i, 2) == vals[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << vals[j] << endl;
                return;
            }
        }

        for (int j = 676; j <= vals.size() - 1; j++)
        {
            bool flag = 1;
            for (int i = 0; i <= n - 3; i++)
            {
                if (arr.substr(i, 3) == vals[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << vals[j] << endl;
                return;
            }
        }
    }
}

signed main()
{
    for (int i = 97; i <= 122; i++)
    {
        for (int j = 97; j <= 122; j++)
        {
            char a = i;
            char b = j;
            string s;
            s += a;
            s += b;
            vals.push_back(s);
        }
    }

    for (int i = 97; i <= 122; i++)
    {
        for (int j = 97; j <= 122; j++)
        {
            char a = i;
            char b = j;
            string s;
            s += 'a';
            s += a;
            s += b;
            vals.push_back(s);
        }
    }
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
