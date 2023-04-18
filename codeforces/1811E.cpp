/*
author:  rohitkotha10
created: 18.04.2023 06:39:17
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
    int k;
    cin >> k;

    vector<int> digits;
    while (k > 0) {
        digits.push_back(k % 9);
        k /= 9;
    }
    reverse(digits.begin(), digits.end());
    for (int i = 0; i < digits.size(); i++) {
        if (digits[i] > 3)
            cout << digits[i] + 1;
        else
            cout << digits[i];
    }
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
