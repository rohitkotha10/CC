/*
author:  rohitkotha10
created: 19.03.2024 13:35:53
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
    int a, b, c;
    cin >> a >> b >> c;
    int req = 0;
    if (b % 3 != 0) req = 3 - b % 3;
    if (c < req)
        cout << -1 << endl;
    else {
        int ans = a + b / 3;
        if (req != 0) {
            c -= req;
            ans++;
        }
        ans += c / 3;
        if (c % 3 != 0) ans++;
        cout << ans << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
