/*
author:  rohitkotha10
created: 23.03.2023 20:18:25
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
    int n;
    cin >> n;
    int a = sqrt(n);
    while (a * a > n) { a--; }
    cout << (a * a == n ? a - 1 : a) << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
