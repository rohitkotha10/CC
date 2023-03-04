/*
author:  rohitkotha10
created: 24.12.2022 06:05:12.
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

signed main() {
    IOS;
    int n, a, b;
    cin >> n >> a >> b;
    if (n == 1) {
        int ans = 0;
        if (a == b) ans = 1;
        cout << ans << endl;
        cout << a << ":" << b << endl;
    } else {
        if (a == 0) {
            if (n > b) {
                cout << n - b << endl;
                for (int i = 0; i < b; i++) { cout << 0 << ":" << 1 << endl; }
                for (int i = 0; i < n - b; i++) { cout << 0 << ":" << 0 << endl; }
            } else {
                cout << 0 << endl;
                for (int i = 0; i < n - 1; i++) { cout << 0 << ":" << 1 << endl; }
                cout << 0 << ":" << b - (n - 1) << endl;
            }
        } else if (b == 0) {
            if (n > a) {
                cout << n - a << endl;
                for (int i = 0; i < a; i++) { cout << 1 << ":" << 0 << endl; }
                for (int i = 0; i < n - a; i++) { cout << 0 << ":" << 0 << endl; }
            } else {
                cout << 0 << endl;
                for (int i = 0; i < n - 1; i++) { cout << 1 << ":" << 0 << endl; }
                cout << a - (n - 1) << ":" << 0 << endl;
            }
        } else {
            if (n > a + b) {
                cout << n - (a + b) << endl;
                for (int i = 0; i < a; i++) { cout << 1 << ":" << 0 << endl; }
                for (int i = 0; i < b; i++) { cout << 0 << ":" << 1 << endl; }
                for (int i = 0; i < n - (a + b); i++) { cout << 0 << ":" << 0 << endl; }
            } else {
                cout << 0 << endl;
                if (n > a) {
                    for (int i = 0; i < a; i++) { cout << 1 << ":" << 0 << endl; }
                    for (int i = 0; i < n - a - 1; i++) { cout << 0 << ":" << 1 << endl; }
                    cout << 0 << ":" << b - (n - a - 1) << endl;
                } else {
                    for (int i = 0; i < n - 2; i++) { cout << 1 << ":" << 0 << endl; }
                    cout << a - (n - 2) << ":" << 0 << endl;
                    cout << 0 << ":" << b << endl;
                }
            }
        }
    }
}
