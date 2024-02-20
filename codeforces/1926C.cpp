/*
author:  rohitkotha10
created: 19.02.2024 20:14:14
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

vector<int> ans;

int getSumOfDigits(int n) {
    int ans = 0;
    while (n > 0) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

void precompute() {
    vector<int> original(MAX + 1, 0);
    for (int i = 1; i <= MAX; i++) { original[i] = getSumOfDigits(i); }

    ans.resize(MAX + 1, 0);
    for (int i = 1; i <= MAX; i++) { ans[i] = original[i] + ans[i - 1]; }
}

void solve(int testCase) {
    int n;
    cin >> n;
    cout << ans[n] << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    precompute();
    while (t--) solve(org - t);
}
