/*
author:  rohitkotha10
created: 09.02.2024 16:43:38
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

    vector<int> ans(n, 0);

    int l = 1, r = n;
    for (int i = 0; i < k; i++) {
        for (int j = i; j < n; j += k) {
            if (i % 2 == 0) {
                ans[j] = l;
                l += 1;
            } else {
                ans[j] = r;
                r -= 1;
            }
        }
    }

    for (int i = 0; i < n; i++) cout << ans[i] << ' ';
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
