/*
author:  rohitkotha10
created: 06.02.2024 17:48:57
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
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++) cout << 1 << ' ';
        cout << endl;
    } else {
        if (k == 1 || n == 1)
            cout << "NO" << endl;
        else if (k == 2 && n % 2 == 1)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            if (n % 2 == 0) {
                cout << n / 2 << endl;
                for (int i = 0; i < n; i += 2) cout << 2 << ' ';
                cout << endl;
            } else {
                cout << (n - 1) / 2 << endl;
                cout << 3 << ' ';
                for (int i = 2; i < n - 1; i += 2) cout << 2 << ' ';
                cout << endl;
            }
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
