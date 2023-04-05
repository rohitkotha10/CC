/*
author:  rohitkotha10
created: 04.04.2023 20:01:41
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
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    vector<int> r(n);

    for (int i = 0; i < n; i++) { cin >> l[i] >> r[i]; }

    for (int i = 0; i < n; i++) {
        if (l[i] == r[i] && r[i] == k) {
            cout << "YES" << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        if (r[i] == k) {
            for (int j = 0; j < n; j++) {
                if (i != j && l[j] == k) {
                    cout << "YES" << endl;
                    return;
                }
            }
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
