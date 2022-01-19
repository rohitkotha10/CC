#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    int n, l, r, s;
    cin >> n >> l >> r >> s;
    int len = r - l + 1;

    vector<int> arr(n + 13,0);
    rep(i, 1, n, 1) arr[i] = i;

    int sum1 = 0;
    int map = 0;
    int flag = 0;

    
    //cout << arr[3] << endl;
    rep(i, 1, n + 1 - len, 1)
    {
        //cout << i + len - 1 << endl;
        sum1 = 0;
        rep(j, i, i + len - 1, 1) sum1 += arr[j];
        if(sum1 >= s)
        {
            map = i;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout << -1 << endl;
        return;
    }

    if(sum1 - map + 2 - len > s )
    {
        cout << -1 << endl;
        return;
    }

    int diff = sum1 - s;

    //cout << sum1 - map - 1 << endl;

    if(diff == 0) flag = 2;
    else
    {
        rep(i, map, map + len - 1, 1)
        {
            rep(j, 1, map - 1, 1)
            {
                if(arr[i] - arr[j] == diff)
                {
                    swap(arr[i], arr[j]);
                    flag = 2;
                    break;
                }
            }
            if(flag == 2) break;
        }
    }

    if(flag == 1)
    {
        cout << -1 << endl;
        return;
    }

    //cout << map << endl;

    if(l == map)
    {
        rep(i, 1, n, 1) cout << arr[i] << ' ';
        cout << endl;
    }

    if(l < map)
    {
        int offset = map - l;
        rep(i, 1 + offset, n, 1) cout << arr[i] << ' ';
        rep(i, 1, offset, 1) cout << arr[i] << ' ';
        cout << endl;
    }

    if(l > map)
    {
        int offset = l - map;
        rep(i, n - offset + 1, n, 1) cout << arr[i] << ' ';
        rep(i, 1, n - offset, 1) cout << arr[i] << ' ';
        cout << endl;
    }


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
1 1 1 1
2 1 1 1
2 1 1 2
2 1 1 3
2 1 2 1
2 1 2 2
2 1 2 3
2 2 2 1
2 2 2 2
2 2 2 3
3 1 1 1
3 1 1 2
3 1 1 3
3 1 1 4
3 1 1 5
3 1 1 6
3 1 2 1
3 1 2 2
3 1 2 3
3 1 2 4
3 1 2 5
3 1 2 6
3 1 3 1
3 1 3 2
3 1 3 3
3 1 3 4
3 1 3 5
3 1 3 6
3 2 2 1
3 2 2 2
3 2 2 3
3 2 2 4
3 2 2 5
3 2 2 6
3 2 3 1
3 2 3 2
3 2 3 3
3 2 3 4
3 2 3 5
3 2 3 6
3 3 3 1
3 3 3 2
3 3 3 3
3 3 3 4
3 3 3 5
3 3 3 6
4 1 1 1
4 1 1 2
4 1 1 3
4 1 1 4
4 1 1 5
4 1 1 6
4 1 1 7
4 1 1 8
4 1 1 9
4 1 1 10
4 1 2 1
    2 2
    2 3
    2 4
    2 5
    2 6
    2 7
    2 8
    2 9
    2 10
    3 1
  4 3 2
    3 3
    3 4
    3 5
    3 6
4 1 3 7


*/