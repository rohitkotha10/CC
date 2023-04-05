/*
author:  rohitkotha10
created: 04.04.2023 20:05:42
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
    int n, d;
    cin >> n >> d;
    string arr;
    cin >> arr;

    for (int i = 0; i < n; i++) {
        int temp = arr[i] - '0';
        if (temp < d) {
            for (int j = 0; j < i; j++) cout << arr[j];
            cout << d;
            for (int j = i; j < n; j++) cout << arr[j];
            cout << endl;
            return;
        }
    }
    cout << arr << d << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
