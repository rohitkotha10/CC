/*
author:  rohitkotha10
created: 20.02.2024 17:35:08
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

    int neg = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cout << 0 << endl;
            return;
        }
        if (arr[i] < 0) neg++;
    }

    if (neg % 2 == 1)
        cout << 0 << endl;
    else {
        cout << 1 << endl;
        cout << 1 << ' ' << 0 << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
