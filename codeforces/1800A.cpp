/*
author:  rohitkotha10
created: 04.03.2023 01:33:23
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
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) s[i] = toupper(s[i]);

    if (s[0] != 'M') {
        cout << "NO" << endl;
        return;
    }

    int flag = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            if (flag == 0 && s[i] == 'E') {
                flag = 1;
            } else if (flag == 1 && s[i] == 'O') {
                flag = 2;
            } else if (flag == 2 && s[i] == 'W') {
                flag = 3;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if (flag == 3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
