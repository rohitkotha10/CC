/*
author:  rohitkotha10
created: 15.04.2023 14:36:24
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void insert(int i, char c, string& s) {
    s = s.substr(0, i) + c + s.substr(i, s.length() - i);
}

void solve(int testCase) {
    string s;
    cin >> s;
    if (s == "_")
        cout << 2 << endl;
    else if (s == "^")
        cout << 1 << endl;
    else {
        int ans = 0;
        int i = 0;
        if (s[0] == '_') {
            insert(0, '^', s);
            ans++;
        }
        int n = s.length();
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '_') {
                if (i > 0 && s[i - 1] != '^') {
                    insert(i, '^', s);
                    i++;
                    ans++;
                }
            }
        }

        if (s.back() == '_') {
            s.push_back('^');
            ans++;
        }

        // cout << s << ' ';
        cout << ans << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
