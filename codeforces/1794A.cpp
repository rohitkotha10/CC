/*
author:  rohitkotha10
created: 04.03.2023 23:07:50
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
    int n;
    cin >> n;
    string large1, large2;
    char small1, small2;
    int smalldone = 0;
    int largedone = 0;

    if (n == 2) {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < 2 * n - 2; i++) {
        string temp;
        cin >> temp;
        if (temp.size() == n - 1) {
            if (largedone == 0) {
                large1 = temp;
                largedone = 1;
            } else {
                large2 = temp;
            }
        } else if (temp.size() == 1) {
            if (smalldone == 0) {
                small1 = temp[0];
                smalldone = 1;
            } else {
                small2 = temp[0];
            }
        }
    }

    string ans;
    int chosen = 0;
    if (large1.substr(1, n - 2) == large2.substr(0, n - 2)) {
        if ((large1[0] == small1 && large2.back() == small2) || (large1[0] == small2 && large2.back() == small1)) {
            ans = large1 + large2.back();
            chosen = 1;
        }
    }
    if (large2.substr(1, n - 2) == large1.substr(0, n - 2) && chosen == 0) {
        if ((large2[0] == small1 && large1.back() == small2) || (large2[0] == small2 && large1.back() == small1)) {
            ans = large2 + large1.back();
            chosen = 1;
        }
    }
    // cout << ans << ' ';

    for (int i = 0; i < n - i - 1; i++) {
        if (ans[i] != ans[n - i - 1]) {
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
