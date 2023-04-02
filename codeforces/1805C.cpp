/*
author:  rohitkotha10
created: 02.04.2023 20:23:58
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
    int n, m;
    cin >> n >> m;
    vector<int> lines(n);
    for (int i = 0; i < n; i++) cin >> lines[i];

    sort(lines.begin(), lines.end());

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int ind = lower_bound(lines.begin(), lines.end(), b) - lines.begin();
        if (ind < n && (lines[ind] - b) * (lines[ind] - b) < 4 * a * c) {
            cout << "YES" << endl;
            cout << lines[ind] << endl;
        } else if (ind > 0 && (lines[ind - 1] - b) * (lines[ind - 1] - b) < 4 * a * c) {
            cout << "YES" << endl;
            cout << lines[ind - 1] << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
