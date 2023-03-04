/*
author:  rohitkotha10
created: 19.01.2023 19:12:47
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
    int w, d, h;
    cin >> w >> d >> h;
    int a, b, f, g;
    cin >> a >> b >> f >> g;
    int opt1 = min(2 * d - (b + g), b + g) + h + abs(a - f);
    int opt2 = min(2 * w - (a + f), a + f) + h + abs(b - g);
    cout << min(opt1, opt2) << endl;  
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
