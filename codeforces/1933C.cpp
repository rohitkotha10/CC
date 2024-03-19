/*
author:  rohitkotha10
created: 14.03.2024 18:03:49
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
    int a, b, l;
    cin >> a >> b >> l;

    set<int> ans;

    for (int x = 0; pow(a, x) <= l; x++) {
        for (int y = 0; pow(b, y) <= l; y++) {
            int cur = pow(a, x) * pow(b, y);
            if (l % cur == 0) ans.insert(l / cur);
        }
    }

    // for (auto i: ans) cout << i << ' ';
    // cout << endl;
    cout << ans.size() << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
