/*
author:  rohitkotha10
created: 09.04.2023 20:41:14
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
    vector<int> top(n);
    vector<int> bottom(n);

    top[0] = 2 * n;
    for (int i = 2; i <= n; i += 2) { top[i - 1] = i; }
    for (int i = n + 2; i < 2 * n; i += 2) { top[i - n] = i; }

    for (int i = 1; i <= n - 1; i += 2) { bottom[i - 1] = i; }
    for (int i = n + 1; i < 2 * n - 1; i += 2) { bottom[i - n] = i; }
    bottom[n - 1] = 2 * n - 1;

    for (int i = 0; i < n; i++) { cout << top[i] << ' '; }
    cout << endl;
    for (int i = 0; i < n; i++) { cout << bottom[i] << ' '; }
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
