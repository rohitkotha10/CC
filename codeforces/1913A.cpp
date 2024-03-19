/*
author:  rohitkotha10
created: 23.02.2024 17:53:58
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
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != '0') {
            int diff = stoi(s.substr(i, s.length() - i)) - stoi(s.substr(0, i));
            if (diff > 0) {
                cout << stoi(s.substr(0, i)) << ' ' << stoi(s.substr(i, s.length() - i)) << endl;
            } else
                cout << -1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
