/*
author:  rohitkotha10
created: 25.04.2023 12:46:14
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
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int ans = 0;
    int ind = -2;
    for (int i = 0; i < n; i++) {
        if (a[i] + i <= t) {
            if (b[i] > ans) {
                ans = b[i];
                ind = i;
            }
        }
    }
    cout << ind + 1 << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
