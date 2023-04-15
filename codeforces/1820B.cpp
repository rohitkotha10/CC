/*
author:  rohitkotha10
created: 15.04.2023 15:13:10
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
    int maxcont = 0;
    int cur = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1')
            cur++;
        else {
            maxcont = max(maxcont, cur);
            cur = 0;
        }
    }
    maxcont = max(maxcont, cur);  // for the last 1

    if (s[0] == '1' && s.back() == '1') {
        int forward = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '1') break;
            forward++;
        }

        int backward = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != '1') break;
            backward++;
        }

        if (forward != s.length()) { maxcont = max(maxcont, forward + backward); }
    }
    if (maxcont == s.length())
        cout << maxcont * maxcont << endl;
    else if (maxcont == 0)
        cout << 0 << endl;
    else { cout << ((maxcont - 1) / 2 + 1) * (maxcont / 2 + 1) << endl; }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
