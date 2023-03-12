/*
author:  rohitkotha10
created: 11.03.2023 13:04:58
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve() {
    string a, b;
    cin >> a >> b;
    if (a[0] == b[0]) {
        cout << "YES" << endl;
        cout << a[0] << "*" << endl;
    } else if (a.back() == b.back()) {
        cout << "YES" << endl;
        cout << "*" << a.back() << endl;
    } else {
        for (int i = 0; i < a.length() - 1; i++) {
            string asub = a.substr(i, 2);
            for (int j = 0; j < b.length() - 1; j++) {
                string bsub = b.substr(j, 2);
                if (asub == bsub) {
                    cout << "YES" << endl;
                    cout << "*" << bsub << "*" << endl;
                    return;
                }
            }
        }
        cout << "NO" << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
