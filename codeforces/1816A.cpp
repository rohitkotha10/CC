/*
author:  rohitkotha10
created: 09.04.2023 20:26:26
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
    if (b == 1 || a == 1) {
        cout << 1 << endl;
        cout << a << ' ' << b << endl;
    } else {
        cout << 2 << endl;
        cout << 1 << ' ' << b - 1 << endl;
        cout << a << ' ' << b << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
