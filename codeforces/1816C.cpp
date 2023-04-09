/*
author:  rohitkotha10
created: 09.04.2023 20:56:00
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

    if (n % 2 == 1) {
        cout << "YES" << endl;
        return;
    }

    for (int i = n - 1; i >= 3; i -= 2) {
        if (arr[i] > arr[i - 1]) {
            arr[i - 2] += abs(arr[i] - arr[i - 1]);
            arr[i] -= abs(arr[i] - arr[i - 1]);
        } else if (arr[i] < arr[i - 1]) {
            arr[i - 2] -= abs(arr[i] - arr[i - 1]);
            arr[i] += abs(arr[i] - arr[i - 1]);
        }
    }

    // for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    // cout << endl;

    if (arr[0] <= arr[1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
