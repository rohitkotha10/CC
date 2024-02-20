/*
author:  rohitkotha10
created: 17.02.2024 20:09:55
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
    vector<int> ans(n);
    int cntOdd = 1;
    int cntEven = n;
    for (int i = 0; i < n; i += 2) ans[i] = cntOdd++;
    for (int i = 1; i < n; i += 2) ans[i] = cntEven--;
    for (auto i: ans) cout << i << ' ';
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
