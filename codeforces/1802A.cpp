/*
author:  rohitkotha10
created: 09.03.2023 22:03:18
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
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            neg++;
        else
            pos++;
    }

    for (int i = 0; i < pos; i++) cout << i + 1 << ' ';
    for (int i = 0; i < neg; i++) cout << pos - i - 1 << ' ';
    cout << endl;

    int diff = pos - neg;
    for (int i = 0; i < neg; i++) cout << 1 << ' ' << 0 << ' ';
    int rem = pos - neg;
    for (int i = 0; i < rem; i++) cout << i + 1 << ' ';
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
