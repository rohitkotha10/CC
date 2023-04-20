/*
author:  rohitkotha10
created: 20.04.2023 20:13:52
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
    vector<int> orig(n);
    vector<int> sorted(n);
    for (int i = 0; i < n; i++) cin >> orig[i];
    for (int i = 0; i < n; i++) cin >> sorted[i];

    int firstind = -1;
    int lastind = -1;

    for (int i = 0; i < n; i++) {
        if (orig[i] != sorted[i]) {
            firstind = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (orig[i] != sorted[i]) {
            lastind = i;
            break;
        }
    }

    // must be guaranteed that firstind < lastind
    int min = sorted[firstind];
    for (int i = firstind - 1; i >= 0; i--) {
        if (orig[i] <= min) {
            min = orig[i];
            firstind--;
        } else
            break;
    }

    int max = sorted[lastind];
    for (int i = lastind + 1; i < n; i++) {
        if (orig[i] >= max) {
            max = orig[i];
            lastind++;
        } else
            break;
    }

    cout << firstind + 1 << ' ' << lastind + 1 << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
