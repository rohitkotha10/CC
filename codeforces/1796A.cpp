/*
author:  rohitkotha10
created: 04.03.2023 22:43:36
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
    int k;
    cin >> k;
    string s;
    cin >> s;
    int numf = 0;
    int numb = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'F') {
            numf++;
            numb = 0;
            if (numf >= 3) {
                cout << "NO" << endl;
                return;
            }
        } else if (s[i] == 'B') {
            numb++;
            numf = 0;
            if (numb >= 2) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    for (int i = 0; i < k - 5; i++) {
        if (s.substr(i, 6) == "FBFBFB") {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
