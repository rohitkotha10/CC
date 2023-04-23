/*
author:  rohitkotha10
created: 21.04.2023 17:17:37
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
    int a, b, n, m;
    cin >> a >> b >> n >> m;
    int q = n / (m + 1);
    int r = n % (m + 1);
    cout << q * min(a * m, b * (m + 1)) + r * min(a, b) << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
