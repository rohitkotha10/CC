/*
author:  rohitkotha10
created: 28.12.2023 20:07:37
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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
        cout << c << endl;
    else if (b == c)
        cout << a << endl;
    else
        cout << b << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
