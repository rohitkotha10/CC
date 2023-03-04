/*
author:  rohitkotha10
created: 24.12.2022 21:28:35
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
    vector<int> x(3);
    vector<int> y(3);

    for (int i = 0; i < 3; i++) cin >> x[i] >> y[i];

    if (x[0] > min(x[1], x[2]) && x[0] < max(x[1], x[2])) {
        cout << "YES" << endl;
    } else if (x[1] > min(x[0], x[2]) && x[1] < max(x[0], x[2])) {
        cout << "YES" << endl;
    } else if (x[2] > min(x[1], x[0]) && x[2] < max(x[1], x[0])) {
        cout << "YES" << endl;
    } else if (y[0] > min(y[1], y[2]) && y[0] < max(y[1], y[2])) {
        cout << "YES" << endl;
    } else if (y[1] > min(y[0], y[2]) && y[1] < max(y[0], y[2])) {
        cout << "YES" << endl;
    } else if (y[2] > min(y[1], y[0]) && y[2] < max(y[1], y[0])) {
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
