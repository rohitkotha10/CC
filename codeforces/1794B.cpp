/*
author:  rohitkotha10
created: 04.03.2023 23:40:49
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
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) arr[i]++;
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] % arr[i - 1] == 0) arr[i]++;
    }

    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
