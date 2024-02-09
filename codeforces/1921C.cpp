/*
author:  rohitkotha10
created: 09.02.2024 21:12:42
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
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (a * arr[0] >= b)
                f -= b;
            else
                f -= a * arr[0];
        } else {
            if (a * (arr[i] - arr[i - 1]) >= b)
                f -= b;
            else
                f -= a * (arr[i] - arr[i - 1]);
        }

        if (f <= 0) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
