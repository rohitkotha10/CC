/*
author:  rohitkotha10
created: 04.04.2023 20:40:11
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
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) { cin >> arr[i]; }

    vector<int> ans(n, -1);

    for (int i = 0; i < n - 2; i++) {
        if (arr[i] == arr[i + 1]) {
            if (ans[i] == -1) ans[i] = arr[i];  // or 0
            ans[i + 1] = arr[i + 1];
        } else if (arr[i] > arr[i + 1]) {
            ans[i] = arr[i];
            if (ans[i + 1] == -1) ans[i + 1] = arr[i + 1];  // or 0
        } else if (arr[i] < arr[i + 1]) {
            if (ans[i] == -1) ans[i] = arr[i];
            if (ans[i + 1] == -1) ans[i + 1] = 0;
            ans[i + 2] = arr[i + 1];
        }
    }
    if (n == 2) ans[0] = arr[0];
    if (ans.back() == -1) ans.back() = 0;
    for (int i = 0; i < n; i++) { cout << ans[i] << ' '; }
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
