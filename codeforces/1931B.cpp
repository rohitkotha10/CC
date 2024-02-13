/*
author:  rohitkotha10
created: 13.02.2024 20:21:45
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
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        sum += temp;
        arr[i] = temp;
    }

    int target = sum / n;
    int excess = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= target) {
            excess += (arr[i] - target);
        } else {
            if (target - arr[i] > excess) {
                cout << "NO" << endl;
                return;
            } else {
                excess -= (target - arr[i]);
            }
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
