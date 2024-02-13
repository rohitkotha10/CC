/*
author:  rohitkotha10
created: 13.02.2024 21:04:36
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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<int, vector<int>> groups;

    for (int i = 0; i < n; i++) {
        int rem = arr[i] % y;
        groups[rem].push_back(arr[i]);
    }

    int ans = 0;
    for (auto group: groups) {
        // cout << "GROUP " << group.first << endl;
        // for (int i: group.second) { cout << i << ' '; }
        // cout << endl;

        if (group.second.size() > 1) {
            int temp = 0;
            map<int, int> remX;

            for (int i: group.second) remX[i % x]++;
            // for (auto i: remX) cout << i.first << ' ';
            // cout << endl;
            // for (auto i: remX) cout << i.second << ' ';
            // cout << endl;
            for (int i: group.second) {
                if (i % x == 0)
                    temp += remX[0] - 1;
                else if (x - i % x == i % x)
                    temp += remX[i % x] - 1;
                else
                    temp += remX[x - i % x];
            }
            // cout << temp << endl;
            ans += temp / 2;
        }
    }
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
