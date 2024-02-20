/*
author:  rohitkotha10
created: 20.02.2024 13:08:27
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

    int cur = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] <= cur) {
            int adj = cur / arr[i];
            int newCur = arr[i] * adj;
            if (newCur <= cur) newCur += arr[i];
            cur = newCur;
        } else
            cur = arr[i];
    }

    cout << cur << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
