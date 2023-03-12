/*
author:  rohitkotha10
created: 11.03.2023 13:10:46
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 998244353;

void solve() {
    int l, r;
    cin >> l >> r;
    int ans = 0;
    int num = 0;
    int temp = l;
    while (temp <= r) {
        ans++;
        temp *= 2;
    }
    for (int i = l; i <= r; i++) {
        if (i * pow(2, ans - 1) <= r) num++;
        if (i * pow(2, ans - 2) * 3 <= r) num++;
    }
    cout << ans << ' ' << num << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
