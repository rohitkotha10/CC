/*
author:  rohitkotha10
created: 12.01.2023 13:20:24
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
    string n;
    cin >> n;

    int dig = n[0] - '0';
    int len = n.length();
    cout << (len - 1) * 9 + dig << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
