/*
author:  rohitkotha10
created: 09.02.2024 20:33:42
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
    vector<pair<int, int>> coordinates;
    for (int i = 0; i < 4; i++) {
        int x, y;
        cin >> x >> y;
        coordinates.emplace_back(x, y);
    }

    for (int i = 1; i < 4; i++) {
        if (coordinates[0].first == coordinates[i].first) {
            int ans = coordinates[0].second - coordinates[i].second;
            cout << ans * ans << endl;
            return;
        }
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
