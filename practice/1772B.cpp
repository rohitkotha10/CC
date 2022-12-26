/*
author:  rohitkotha10
created: 26.12.2022 21:23:31
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
    int a, b, c, d;
    cin >> a >> b >> d >> c;

    // ab  da  cd  bc
    // dc  cb  ba  ad
    if (a < b && a < d && c > d && c > b) {
        cout << "YES" << endl;
    } else if (d < a && d < c && b > c && b > a) {
        cout << "YES" << endl;
    } else if (c < d && c < b && a > b && a > d) {
        cout << "YES" << endl;
    } else if (b < c && b < a && d > a && d > c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
