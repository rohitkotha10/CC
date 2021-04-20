/*
author:  rohitkotha10
created: 21.04.2021 01:05:07
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
//no test case

void op1(vector<int>& v)
{
    int n = (v.size() - 1) / 2; //size 2 n + 1; v[0] = 0;
    rep(i, 1, n, 1)
    {
        swap(v[i], v[n + i]);
    }
};

void op2(vector<int>& v)
{
    int n = (v.size() - 1) / 2; //size 2 n + 1; v[0] = 0;
    rep(i, 1, 2 * n, 2)
    {
        swap(v[i], v[i + 1]);
    }
};

void print(const vector<int>& v)
{
    int n = (v.size() - 1) / 2;
    cout << "{ ";
    rep(i, 1, 2 * n, 1) cout << v[i] << ", ";
    cout << "}" << endl;

}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(2 * n + 1);
    arr[0] = 0;
    rep(i, 1, 2 * n, 1) cin >> arr[i];

    vector<int> arrold = arr;


    vector<int> sol(2 * n + 1);
    sol[0] = 0;
    rep(i, 1, 2 * n, 1) sol[i] = i;

    int cnt = 0;
    int temp = 0;
    bool flag = 0;

    if(arr == sol)
    {
        cout << 0 << endl;
        return;
    }
    while(arr != sol)
    {
        op1(arr);
        temp++;
        if(arr == sol)
        {
            flag = 1;
            break;
        }
        op2(arr);
        temp++;
        if(arr == sol)
        {
            flag = 1;
            break;
        }
        if(temp > 2 * n) break;
    }

    arr = arrold;

    while(arr != sol)
    {
        op2(arr);
        cnt++;
        if(arr == sol)
        {
            flag = 1;
            break;
        }
        op1(arr);
        cnt++;
        if(arr == sol)
        {
            flag = 1;
            break;
        }
        if(cnt > 2 * n) break;
    }

    cnt = min(cnt, temp);
    if(flag == 0) cout << - 1 << endl;
    else cout << cnt << endl;

}

signed main()
{
    IOS;
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}