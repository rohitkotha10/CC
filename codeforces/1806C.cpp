/*
author:  rohitkotha10
created: 18.03.2023 18:14:49
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
    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; i++) cin >> arr[i];

    // if (testCase == 245) {
    //     for (int i = 0; i < 2 * n; i++) cout << arr[i] << '$';
    //     cout << endl;
    //     return;
    // }
    sort(arr.begin(), arr.end());
    if (n == 1) {
        // x x
        // min |arr[0] - x| + |arr[1] - x|
        cout << abs(arr[0] - arr[1]) << endl;
    } else if (n == 2) {
        // 2 2 2 2 or 0 0 0 0 or -1 -1 -1 2;
        int op1 = 0;
        int op2 = 0;
        int op3 = 0;
        for (int i = 0; i < 2 * n; i++) op1 += abs(arr[i] - 2);
        for (int i = 0; i < 2 * n; i++) op2 += abs(arr[i]);
        for (int i = 0; i < 2 * n - 1; i++) op3 += abs(arr[i] + 1);
        op3 += abs(arr.back() - n);

        cout << min(op1, min(op2, op3)) << endl;

    } else {
        // all 0s or -1 -1 -1 ... n
        int op2 = 0;
        int op3 = 0;
        for (int i = 0; i < 2 * n; i++) op2 += abs(arr[i]);
        if (n % 2 == 1)
            cout << op2 << endl;
        else {
            for (int i = 0; i < 2 * n - 1; i++) op3 += abs(arr[i] + 1);
            op3 += abs(arr.back() - n);
            cout << min(op2, op3) << endl;
        }
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
