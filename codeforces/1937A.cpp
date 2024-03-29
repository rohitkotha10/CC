/*
author:  rohitkotha10
created: 19.03.2024 12:57:15
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
    int ans = 0;
    while (n > 0) {
        n /= 2;
        ans++;
    }
    cout << (int)pow(2, ans - 1) << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
