/*
author:  rohitkotha10
created: 09.02.2024 21:08:53
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
    int n, k;
    cin >> n >> k;

    string temp;
    for (int i = 0; i < k; i++) temp += 'a' + i;

    string ans;
    for (int i = 0; i < n; i++) ans += temp;

    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
