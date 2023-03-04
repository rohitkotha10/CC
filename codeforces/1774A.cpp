/*
author:  rohitkotha10
created: 24.12.2022 05:39:36
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        char temp;
        cin >> temp;
        temp = temp - '0';
        arr[i] = temp;
    }

    int cur = arr[0];
    for (int i = 0; i < n - 1; i++) {
        if (cur >= 0) {
            cout << '-';
            cur = cur - arr[i + 1];
        } else {
            cout << '+';
            cur = cur + arr[i + 1];
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
