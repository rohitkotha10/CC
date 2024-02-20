/*
author:  rohitkotha10
created: 20.02.2024 13:02:31
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
    string s;
    cin >> n;
    cin >> s;
    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '*' && s[i + 1] == '*') {
            cout << sum << endl;
            return;
        }
        if (s[i] == '@') sum++;
    }
    if (s.back() == '@') sum++;
    cout << sum << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
