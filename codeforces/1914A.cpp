/*
author:  rohitkotha10
created: 23.02.2024 17:51:01
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

    vector<int> arr(26, 0);
    for (int i = 0; i < n; i++) arr[s[i] - 'A']++;

    int ans = 0;
    for (int i = 0; i < 26; i++)
        if (arr[i] > i) ans++;

    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
