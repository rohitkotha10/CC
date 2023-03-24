/*
author:  rohitkotha10
created: 23.03.2023 20:07:16
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
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int diff = 1;
    for (int i = 1; i < 4; i++) {
        if (s[i] != s[i - 1]) diff++;
    }
    if (diff == 1)
        cout << -1 << endl;
    else if (diff == 2) {
        if (s[0] != s[1] || s[2] != s[3])
            cout << 6 << endl;
        else
            cout << 4 << endl;
    } else if (diff == 3)
        cout << 4 << endl;
    else if (diff == 4)
        cout << 4 << endl;
    else
        cout << -2 << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
