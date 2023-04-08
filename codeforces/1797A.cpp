/*
author:  rohitkotha10
created: 08.04.2023 19:35:50
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve(int testCase) {
    int n, m;
    cin >> n >> m;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int ans = 4;
    if (x1 == 1 || x1 == n) ans--;
    if (y1 == 1 || y1 == m) ans--;

    int ans2 = 4;
    if (x2 == 1 || x2 == n) ans2--;
    if (y2 == 1 || y2 == m) ans2--;
    cout << min(ans, ans2) << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
