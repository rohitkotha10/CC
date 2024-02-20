/*
author:  rohitkotha10
created: 20.02.2024 13:40:09
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
    vector<int> arrNotSame;
    int maxOne = 0, minTwo = MOD;

    for (int i = 0; i < n; i++) {
        int a, x;
        cin >> a >> x;
        if (a == 1) {
            maxOne = max(maxOne, x);
        } else if (a == 2) {
            minTwo = min(minTwo, x);
        } else {
            arrNotSame.push_back(x);
        }
    }

    int cnt = minTwo - maxOne + 1;
    if (cnt <= 0) {
        cout << 0 << endl;
        return;
    }
    set<int> invalids;
    for (int i: arrNotSame) {
        if (i >= maxOne && i <= minTwo) invalids.insert(i);
    }
    cnt -= invalids.size();

    cout << cnt << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
