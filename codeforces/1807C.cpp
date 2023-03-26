/*
author:  rohitkotha10
created: 26.03.2023 10:05:01
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> even;
    set<char> odd;
    for (int i = 0; i < n; i += 2) {
        if (even.count(s[i]) == 0) { even.insert(s[i]); }
    }

    for (int i = 1; i < n; i += 2) {
        if (even.count(s[i]) == 1) {
            cout << "NO" << endl;
            return;
        }
        if (odd.count(s[i]) == 0) { odd.insert(s[i]); }
    }
    cout << "YES" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
