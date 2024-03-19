/*
author:  rohitkotha10
created: 23.02.2024 20:05:27
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int first = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            first = i;
            break;
        }
    }

    int last = -1;
    for (int i = n - 1; i > first; i--) {
        if (arr[i] == 1) {
            last = i;
            break;
        }
    }

    if (last == -1 || first == -1) {
        cout << 0 << endl;
    } else {
        int ans = 0;
        for (int i = first; i <= last; i++) {
            if (arr[i] == 0) ans++;
        }
        cout << ans << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
