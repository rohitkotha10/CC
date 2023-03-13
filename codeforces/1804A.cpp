/*
author:  rohitkotha10
created: 12.03.2023 20:06:36
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve() {
    int a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    if (abs(a - b) <= 1) {
        cout << a + b << endl;
    } else {
        cout << min(a, b) * 2 + abs(a - b) * 2 - 1 << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
