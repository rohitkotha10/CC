/*
author:  rohitkotha10
created: 06.04.2023 20:14:16
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
    int a, b;
    cin >> a >> b;

    int ans = a + b;
    for (int k = 1; k < 1e5; k++) {
        int aans = a / k;
        if (a % k != 0) aans++;
        int bans = b / k;
        if (b % k != 0) bans++;
        int temp = aans + bans + k - 1;
        ans = min(ans, temp);
    }
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
