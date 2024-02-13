/*
author:  rohitkotha10
created: 13.02.2024 20:29:54
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

    int cnt_left = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            cnt_left++;
        else
            break;
    }

    int cnt_right = 1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] == arr[i + 1])
            cnt_right++;
        else
            break;
    }
    if (arr[n - 1] == arr[0]) {
        if (cnt_right != n)
            cout << n - (cnt_right + cnt_left) << endl;
        else
            cout << 0 << endl;
    } else {
        if (cnt_right > cnt_left)
            cout << n - cnt_right << endl;
        else
            cout << n - cnt_left << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
