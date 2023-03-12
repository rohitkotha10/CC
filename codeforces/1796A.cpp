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
    string org;
    for (int i = 1; i <= 30; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            org += "FB";
        else if (i % 3 == 0)
            org += "F";
        else if (i % 5 == 0)
            org += "B";
    }
    int len = org.length();
    if (k <= len) {
        for (int i = 0; i < len; i++) {
            string checker;
            if (k + i > len) {
                int extr = k + i - len;
                string surp = org.substr(0, extr);
                checker = org.substr(i, len - i) + surp;
            } else {
                checker = org.substr(i, k);
            }

            if (checker == s) {
                cout << " YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    } else {
        int ind = -1;
        for (int i = 0; i < len; i++) {
            string checker = org.substr(i, len - i) + org.substr(0, i);
            if (checker == s) {
                ind = i;
                break;
            }
        }

        if (ind == -1) {
            cout << "NO" << endl;
        } else {
            for (int i = 0; i < k; i++) {
                if (s[i] != org[ind]) {
                    cout << "NO" << endl;
                    return;
                }
                ind = ind + 1;
                if (ind >= 30) ind = 0;
            }
            cout << "YES" << endl;
        }
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
