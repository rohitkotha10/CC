/*
author:  rohitkotha10
created: 04.04.2023 17:40:55
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > max(a[n - 1], b[n - 1]) || b[i] > max(a[n - 1], b[n - 1]) || a[n - 1] < min(a[i], b[i]) ||
            b[n - 1] < min(a[i], b[i])) {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
