/*
author:  rohitkotha10
created: 09.02.2024 20:51:33
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
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < n; i++) {
        if ((a[i] != c[i] && c[i] != b[i]) || (a[i] == b[i] && c[i] != b[i])) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
