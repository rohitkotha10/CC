/*
author:  rohitkotha10
created: 04.04.2023 16:07:03
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int evaluate(int i) {
    vector<int> arr;
    while (i > 0) {
        int cur = i % 10;
        arr.push_back(cur);
        i = i / 10;
    }
    if (arr.size() == 1) { return 0; }
    sort(arr.begin(), arr.end());
    return arr.back() - arr[0];
}

void solve(int testCase) {
    int l, r;
    cin >> l >> r;

    int ans = l;
    int mx = evaluate(l);
    for (int i = l; i <= r && i - l <= 100; i++) {
        int temp = evaluate(i);
        if (temp >= mx) {
            ans = i;
            mx = temp;
        }
    }
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
