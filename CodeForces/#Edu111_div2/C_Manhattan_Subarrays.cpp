/*
author:  rohitkotha10
created: 14.07.2021 20:31:28
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

struct Point
{
    int x, y;
};

int ManDis(Point a, Point b)
{
    return (abs(a.x - b.x) + abs(a.y - b.y));
}
bool check(Point a, Point b, Point c)
{
    if ((ManDis(a, c) == ManDis(a, b) + ManDis(b, c)) ||
        (ManDis(a, b) == ManDis(a, c) + ManDis(c, a)) ||
        (ManDis(b, c) == ManDis(b, a) + ManDis(a, c)))
        return true;
    return false;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 2 * n - 1;
    if (n <= 2)
    {
        cout << ans << endl;
        return;
    }
    int cnt = 2;

    for (int i = 0; i <= n - 3; i++)
    {
        Point p1 = Point{arr[i], i + 1};
        Point p2 = Point{arr[i + 1], i + 2};
        Point p3 = Point{arr[i + 2], i + 3};

        if (check(p1, p2, p3) == 0)
            cnt++;
        else
        {
            cout << i << ' ' << cnt << endl;
            int temp = (cnt * (cnt + 1)) / 2;
            temp -= (2 * cnt - 1);
            ans += temp;
            cnt = 2;
        }
    }

    if (cnt == n)
    {
        cout << n - 3 << 'f' << cnt << endl;
        int temp = (cnt * (cnt + 1)) / 2;
        temp -= (2 * cnt - 1);
        ans += temp;
        cnt = 2;
    }

    cout << ans << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
