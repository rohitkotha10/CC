/*
author:  rohitkotha10
created: 26.12.2022 20:57:30
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve() {
    int n, k;
    cin >> k >> n;

    vector<int> arr(k);
    int cur = 1;
    int incr = 1;
    int flag = 1;
    for (int i = 0; i < k; i++) {
        if (flag == 1) {
            cout << cur << ' ';
            if (cur + incr > n - (k - 2 - i)) {
                cur++;
                flag = 0;
            } else {
                cur += incr;
                incr++;
            }
        } else {
            cout << cur << ' ';
            cur++;
        }
    }
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
