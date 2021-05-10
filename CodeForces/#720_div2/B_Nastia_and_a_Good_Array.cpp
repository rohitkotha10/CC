/*
author:  rohitkotha10
created: 07.05.2021 20:41:09
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

int testnum = 0;
int testflag = 0;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
};

struct Token
{
    int i1, j1, x1, y1;
};

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    rep(i, 1, n, 1) cin >> arr[i];
    vector<Token> sol;

    rep(i, 2, n, 1)
    {
        int check = gcd(arr[i], arr[i - 1]);
        if (check == 1)
            continue;
        else
        {
            bool flag = 0;
            if (arr[i] >= arr[i - 1])
            {
                while (gcd(arr[i], arr[i - 1]) != 1)
                    arr[i]++;
                sol.push_back(Token{i - 1, i, arr[i - 1], arr[i]});
            }

            else
            {
                if (i == 2)
                {
                    swap(arr[i], arr[i - 1]);
                    while (gcd(arr[i], arr[i - 1]) != 1)
                        arr[i]++;
                    sol.push_back(Token{i - 1, i, arr[i - 1], arr[i]});
                }

                else
                {
                    while (gcd(arr[i], arr[i - 1]) != 1 || gcd(arr[i - 1], arr[i - 2]) != 1 )
                        arr[i - 1]++;
                    sol.push_back(Token{i - 1, i, arr[i - 1], arr[i]});
                }
            }
        }
    }

    cout << sol.size() << endl;
    if (sol.size() == 0)
        return;

    rep(i, 0, sol.size() - 1, 1)
    {
        cout << sol[i].i1 << ' ' << sol[i].j1 << ' ' << sol[i].x1 << ' ' << sol[i].y1 << endl;
    }
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        testnum++;
        solve();
    }
}
