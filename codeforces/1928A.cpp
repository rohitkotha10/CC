/*
author:  rohitkotha10
created: 17.02.2024 19:33:47
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
    if (a % 2 == 0) {
        if (a / 2 != b || 2 * b != a) {
            cout << "Yes" << endl;
            return;
        }
    }
    if (b % 2 == 0) {
        if (b / 2 != a || 2 * a != b) {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
