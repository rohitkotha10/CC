/*
author:  rohitkotha10
created: 02.05.2021 21:54:52
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int testnum = 0;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> left;
    vector<int> right;
    rep(i, 0, n - 1, 1)
    {
        int val;
        cin >> val;
        if (i <= l - 1)
            left.push_back(val);
        else
            right.push_back(val);
    }


    sort(right.begin(), right.end());
    sort(left.begin(), left.end());

    int i = 0;
    int j = 0;

    while(i < left.size() && j < right.size() && left.size() > 0 && right.size() > 0)
    {
        if (left[i] == right[j])
        {
            left.erase(left.begin() + i);
            right.erase(right.begin() + j);
        }

        else if (left[i] < right[j])
            i++;

        else if (left[i] > right[j])
            j++;
    }

    if (left.size() == right.size())
    {
        cout << left.size() << endl;
        return;
    }

    i = 1;
    j = 1;

    int cnt = 0;

    while (i < right.size() && right.size() > 0)
    {
        if (right[i] == right[i - 1])
        {
            cnt++;
            right.erase(right.begin() + i - 1);
            right.erase(right.begin() + i - 1);
        }
        else
            i++;
    }

    while (j < left.size() && left.size() > 0)
    {
        if (left[j] == left[j - 1])
        {
            cnt++;
            left.erase(left.begin() + j - 1);
            left.erase(left.begin() + j - 1);
        }
        else
            j++;
    }


    int a = left.size();
    int b = right.size();

    cout << a << ' ' << b << ' ' << cnt << endl;

    if (a > b)
        swap(a, b);

    
    cnt += b;

    cout << cnt << endl;
}

signed main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        testnum++;
        solve();
    }
}

/*
missed: do pairing first of l and r
6 2 4
3 3 5 5 7 1
*/
